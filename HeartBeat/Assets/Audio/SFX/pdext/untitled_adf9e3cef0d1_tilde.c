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

#include <alloca.h>
#include <string.h>
#include "m_pd.h"
#include "Heavy_untitled_adf9e3cef0d1.h"

static t_class *untitled_adf9e3cef0d1_tilde_class;

typedef struct _untitled_adf9e3cef0d1_tilde {
  t_object x_obj;
  
  t_outlet *outlet0;
  t_outlet *outlet1;
  t_outlet *msgOutlet;

  HeavyContextInterface *hv;
  t_float f; // dummy
} t_untitled_adf9e3cef0d1_tilde;

static void printHook(HeavyContextInterface *c, const char *receiverName, const char *msgString, const HvMessage *m) {
  double timestampMs = 1000.0 * ((double) hv_msg_getTimestamp(m)) / hv_getSampleRate(c);
  post("[untitled_adf9e3cef0d1~ @ %0.3gms] %s: %s", timestampMs, receiverName, msgString);
}

static void sendHook(HeavyContextInterface *c, const char *receiverName, unsigned int receiverHash, const HvMessage * m) {
  if (!strcmp(receiverName, "#HV_TO_PD")) {
    t_outlet *const outlet = ((t_untitled_adf9e3cef0d1_tilde *) hv_getUserData(c))->msgOutlet;
    if (hv_msg_getNumElements(m) == 1) {
      if (hv_msg_isFloat(m, 0)) {
        outlet_float(outlet, hv_msg_getFloat(m, 0));
      } else if (hv_msg_isBang(m, 0)) {
        outlet_bang(outlet);
      } else if (hv_msg_isSymbol(m, 0)) {
        outlet_symbol(outlet, gensym(hv_msg_getSymbol(m, 0)));
      } else return;
    } else {
      const int argc = (int) hv_msg_getNumElements(m);
      t_atom *argv = (t_atom *) alloca(argc*sizeof(t_atom));
      for (int i = 0; i < argc; i++) {
        if (hv_msg_isFloat(m, i)) {
          SETFLOAT(argv+i, hv_msg_getFloat(m, i));
        } else if (hv_msg_isSymbol(m, i)) {
          SETSYMBOL(argv+i, gensym(hv_msg_getSymbol(m, i)));
        } else return;
      }
      outlet_list(outlet, NULL, argc, argv);
    }
  }
}

static void *untitled_adf9e3cef0d1_tilde_new(t_symbol *s, int argc, t_atom *argv) {
  t_untitled_adf9e3cef0d1_tilde *x = (t_untitled_adf9e3cef0d1_tilde *) pd_new(untitled_adf9e3cef0d1_tilde_class);
  x->outlet0 = outlet_new(&x->x_obj, &s_signal);
  x->outlet1 = outlet_new(&x->x_obj, &s_signal);
  x->msgOutlet = outlet_new(&x->x_obj, &s_anything);

  x->hv = hv_untitled_adf9e3cef0d1_new((double) sys_getsr());
  hv_setUserData(x->hv, x);
  hv_setPrintHook(x->hv, printHook);
  hv_setSendHook(x->hv, sendHook);

  return (void *) x;
}

static void untitled_adf9e3cef0d1_tilde_free(t_untitled_adf9e3cef0d1_tilde *x) {
  outlet_free(x->outlet0);
  outlet_free(x->outlet1);
  outlet_free(x->msgOutlet);
  hv_delete(x->hv);
}

static t_int *untitled_adf9e3cef0d1_tilde_perform(t_int *w) {
  t_untitled_adf9e3cef0d1_tilde *x = (t_untitled_adf9e3cef0d1_tilde *) w[1];
  float **inputChannels = NULL;
  float *outputChannels[2] = {
    (t_sample *) w[2],
    (t_sample *) w[3],
  };
  int n = (int) (w[4]);

  hv_process(x->hv, inputChannels, outputChannels, n);

  return (w+5);
}

static void untitled_adf9e3cef0d1_tilde_dsp(t_untitled_adf9e3cef0d1_tilde *x, t_signal **sp) {
  dsp_add(untitled_adf9e3cef0d1_tilde_perform,
      4, x,
      sp[1]->s_vec,
      sp[2]->s_vec,
      sp[0]->s_n);
}

static void untitled_adf9e3cef0d1_tilde_onMessage(t_untitled_adf9e3cef0d1_tilde *x, t_symbol *s0, int argc, t_atom* argv) {
  // convert a Pd message into a Heavy message
  HvMessage *msg = (HvMessage *) alloca(hv_msg_getByteSize(argc > 0 ? argc : 1));
  if (argc > 0) {
    hv_msg_init(msg, argc, 0);
    for (int i = 0; i < argc; i++) {
      switch (argv[i].a_type) {
        case A_FLOAT: hv_msg_setFloat(msg, i, atom_getfloat(argv+i)); break;
        case A_SYMBOL: hv_msg_setSymbol(msg, i, atom_getsymbol(argv+i)->s_name); break;
        default: return;
      }
    }
  } else {
    hv_msg_init(msg, 1, 0);
    hv_msg_setBang(msg, 0);
  }
  hv_sendMessageToReceiver(x->hv, hv_stringToHash(s0->s_name), 0.0, msg);
}

void untitled_adf9e3cef0d1_tilde_setup() {
  untitled_adf9e3cef0d1_tilde_class = class_new(gensym("untitled_adf9e3cef0d1~"),
      (t_newmethod) untitled_adf9e3cef0d1_tilde_new,
      (t_method) untitled_adf9e3cef0d1_tilde_free,
      sizeof(t_untitled_adf9e3cef0d1_tilde),
      CLASS_DEFAULT, A_GIMME, 0);
  class_addmethod(untitled_adf9e3cef0d1_tilde_class, (t_method) untitled_adf9e3cef0d1_tilde_dsp, gensym("dsp"), 0);
  class_addanything(untitled_adf9e3cef0d1_tilde_class, (t_method) untitled_adf9e3cef0d1_tilde_onMessage);
  CLASS_MAINSIGNALIN(untitled_adf9e3cef0d1_tilde_class, t_untitled_adf9e3cef0d1_tilde, f);
}
