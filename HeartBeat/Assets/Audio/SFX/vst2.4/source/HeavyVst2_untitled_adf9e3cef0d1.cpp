/**
 * Copyright (c) 2019 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#include "HeavyVst2_untitled_adf9e3cef0d1.hpp"
#include "HvUtils.h"

#define HV_VST2_NUM_PARAMETERS 0

extern "C" {
  HV_EXPORT AEffect *VSTPluginMain(audioMasterCallback audioMaster) {
    // Get VST Version of the Host, return NULL if old version
    if (!audioMaster(0, audioMasterVersion, 0, 0, 0, 0)) return NULL;

    // Create the AudioEffect
    AudioEffect* effect = new HeavyVst2_untitled_adf9e3cef0d1(audioMaster);
    if (effect == NULL) return NULL;

    // Return the VST AEffect structure
    return effect->getAeffect();
  }
}

HeavyVst2_untitled_adf9e3cef0d1::HeavyVst2_untitled_adf9e3cef0d1(audioMasterCallback amCallback) :
    AudioEffectX(amCallback, 0, HV_VST2_NUM_PARAMETERS) {
  setUniqueID(0x4945A1AA);
  setNumInputs(0);
  setNumOutputs(2);
  isSynth(true);
  programsAreChunks(true);
  canProcessReplacing(true);
  canDoubleReplacing(false);
  // initialise parameters with defaults
  _context = nullptr;
  this->sampleRate = 0.0f; // initialise sample rate
  setSampleRate(44100.0f); // set sample rate to some default
}

HeavyVst2_untitled_adf9e3cef0d1::~HeavyVst2_untitled_adf9e3cef0d1() {
  delete _context;
}

void HeavyVst2_untitled_adf9e3cef0d1::setSampleRate(float sampleRate) {
  if (this->sampleRate != sampleRate) {
    this->sampleRate = sampleRate;
    delete _context;

    _context = new Heavy_untitled_adf9e3cef0d1(sampleRate, 10, 2, 2);
  }
}

void HeavyVst2_untitled_adf9e3cef0d1::processReplacing(float** inputs, float** outputs, VstInt32 sampleFrames) {
  _context->process(inputs, outputs, sampleFrames);
}

VstInt32 HeavyVst2_untitled_adf9e3cef0d1::processEvents(VstEvents* events) {
  for (int i = 0; i < events->numEvents; ++i) {
    VstEvent *vste = events->events[i];
    switch (vste->type) {
      case kVstMidiType: {
        VstMidiEvent *vstme = (VstMidiEvent *) vste;

        const unsigned char command = vstme->midiData[0] & 0xF0;
        const unsigned char channel = vstme->midiData[0] & 0x0F;
        const unsigned char data0   = vstme->midiData[1] & 0x7F;
        const unsigned char data1   = vstme->midiData[2] & 0x7F;

        switch (command) {
          case 0x80:   // note off
          case 0x90: { // note on
            _context->sendMessageToReceiverV(0x67E37CA3, // __hv_notein
                1000.0*vste->deltaFrames/sampleRate, "fff",
                (float) data0, // pitch
                (float) data1, // velocity
                (float) channel);
            break;
          }
          case 0xB0: { // control change
            _context->sendMessageToReceiverV(0x41BE0F9C, // __hv_ctlin
                1000.0*vste->deltaFrames/sampleRate, "fff",
                (float) data1, // value
                (float) data0, // controller number
                (float) channel);
            break;
          }
          case 0xC0: { // program change
            _context->sendMessageToReceiverV(0x2E1EA03D, // __hv_pgmin,
                1000.0*vste->deltaFrames/sampleRate, "ff",
                (float) data0,
                (float) channel);
            break;
          }
          case 0xD0: { // aftertouch
            _context->sendMessageToReceiverV(0x553925BD, // __hv_touchin
                1000.0*vste->deltaFrames/sampleRate, "ff",
                (float) data0,
                (float) channel);
            break;
          }
          case 0xE0: { // pitch bend
            hv_uint32_t value = (((hv_uint32_t) data1) << 7) | ((hv_uint32_t) data0);
            _context->sendMessageToReceiverV(0x3083F0F7, // __hv_bendin
                1000.0*vste->deltaFrames/sampleRate, "ff",
                (float) value,
                (float) channel);
            break;
          }
          default: break;
        }
        break;
      }
      case kVstSysExType: {
        // not handling this case at the moment, VstMidiSysexEvent *vstmse;
        break;
      }
      default: break;
    }
  }
  return 1;
}

static float scaleParameterForIndex(VstInt32 index, float value) {
  switch (index) {
    default: return 0.0f;
  }
}

void HeavyVst2_untitled_adf9e3cef0d1::setParameter(VstInt32 index, float value) {
  // nothing to do
}

float HeavyVst2_untitled_adf9e3cef0d1::getParameter(VstInt32 index) {
  return 0.0f;
}

void HeavyVst2_untitled_adf9e3cef0d1::getParameterName(VstInt32 index, char* text) {
  switch (index) {
    default: text[0] = '\0'; break;
  }
  text[kVstMaxParamStrLen-1] = '\0';
}

void HeavyVst2_untitled_adf9e3cef0d1::getParameterDisplay(VstInt32 index, char* text) {
  strcpy(text, "0");
}

bool HeavyVst2_untitled_adf9e3cef0d1::string2parameter(VstInt32 index, char* text) {
  setParameter(index, (float) atof(text));
  return true;
}

bool HeavyVst2_untitled_adf9e3cef0d1::getEffectName(char* name) {
  strncpy(name, "untitled_adf9e3cef0d1", kVstMaxEffectNameLen);
  name[kVstMaxEffectNameLen-1] = '\0';
  return true;
}

bool HeavyVst2_untitled_adf9e3cef0d1::getVendorString(char* text) {
  strncpy(text, "Enzien Audio, Ltd.", kVstMaxVendorStrLen);
  text[kVstMaxVendorStrLen-1] = '\0';
  return true;
}

VstInt32 HeavyVst2_untitled_adf9e3cef0d1::canDo(char *text) {
  if (!strcmp(text, "receiveVstEvents")) return 1; // PlugCanDos::canDoReceiveVstEvents
  if (!strcmp(text, "receiveVstMidiEvent")) return 1; // PlugCanDos::canDoReceiveVstMidiEvent
  return 0;
}

VstInt32 HeavyVst2_untitled_adf9e3cef0d1::getChunk(void **data, bool isPreset) {
  *data = nullptr;
  return 0;
}

VstInt32 HeavyVst2_untitled_adf9e3cef0d1::setChunk(void *data, VstInt32 byteSize, bool isPreset) {
  return 0;
}
