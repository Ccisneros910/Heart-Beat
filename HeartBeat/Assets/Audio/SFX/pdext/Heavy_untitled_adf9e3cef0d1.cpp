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

#include "Heavy_untitled_adf9e3cef0d1.hpp"

#define Context(_c) reinterpret_cast<Heavy_untitled_adf9e3cef0d1 *>(_c)



/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_untitled_adf9e3cef0d1_new(double sampleRate) {
    return new Heavy_untitled_adf9e3cef0d1(sampleRate);
  }

  HV_EXPORT HeavyContextInterface *hv_untitled_adf9e3cef0d1_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    return new Heavy_untitled_adf9e3cef0d1(sampleRate, poolKb, inQueueKb, outQueueKb);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_untitled_adf9e3cef0d1::Heavy_untitled_adf9e3cef0d1(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sPhasor_k_init(&sPhasor_4xXl6QTJ, 0.0f, sampleRate);
  numBytes += sPhasor_k_init(&sPhasor_qVFwGLFa, 0.0f, sampleRate);
  numBytes += cDelay_init(this, &cDelay_kKPT31pL, 10.0f);
  numBytes += cDelay_init(this, &cDelay_bDXyAGkg, 200.0f);
  numBytes += cDelay_init(this, &cDelay_jm4GjAyW, 210.0f);
  numBytes += cVar_init_f(&cVar_vgxdOnL2, 1.0f);
  numBytes += cBinop_init(&cBinop_CQN6Unfy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_AjgIW9Hm, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_xrHQBHmE, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_xuAzQyW6, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_noDVivUb, 0, 1);
  numBytes += cSlice_init(&cSlice_fHbH9lWy, 1, 1);
  numBytes += cBinop_init(&cBinop_IhT5JNkv, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_2bDrxU5c, 20.0f); // __div
  numBytes += cSlice_init(&cSlice_FGZYbSrZ, 1, -1);
  numBytes += cSlice_init(&cSlice_kTVUA6Qm, 1, -1);
  numBytes += cBinop_init(&cBinop_56l58M5i, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_8BokTLog, 20.0f);
  numBytes += cDelay_init(this, &cDelay_cALDQwxX, 0.0f);
  numBytes += cVar_init_f(&cVar_J4vtCjLX, 0.0f);
  numBytes += cBinop_init(&cBinop_WxdmIGCf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BBxkHYXS, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_NtNLR98I, 0.0f);
  numBytes += cVar_init_f(&cVar_aFHMUEIn, 0.0f);
  numBytes += cVar_init_f(&cVar_0wnkE7bP, 0.0f);
  numBytes += cVar_init_f(&cVar_0hAwXbFm, 20.0f);
  numBytes += cVar_init_f(&cVar_sL1ZrlnB, 0.0f);
  numBytes += cBinop_init(&cBinop_nuCa4ShO, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_QyBtlzQ9, 0.0f);
  numBytes += cBinop_init(&cBinop_kxqJS2Wk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RJpk5p98, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_5r1jz5rv, 20.0f);
  numBytes += cDelay_init(this, &cDelay_XFeQ1zVK, 0.0f);
  numBytes += cBinop_init(&cBinop_7n5Svxq0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4vtikjsz, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_LbKn3Tr6, 0, 1);
  numBytes += cSlice_init(&cSlice_Ihl8v933, 1, 1);
  numBytes += cBinop_init(&cBinop_MSWBuu91, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_xUA1Zzyt, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_mmtTGHOJ, 20.0f);
  numBytes += cVar_init_f(&cVar_gSk693sR, 0.0f);
  numBytes += cSlice_init(&cSlice_cjrnEvBs, 1, -1);
  numBytes += cSlice_init(&cSlice_H4IDzaZj, 1, -1);
  numBytes += cVar_init_f(&cVar_ya8dmWeU, 0.0f);
  numBytes += cBinop_init(&cBinop_QNJzffHa, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_ItcbTmun, 0.0f);
  numBytes += cVar_init_f(&cVar_qCQnGw1O, 0.0f);
  numBytes += cBinop_init(&cBinop_ErqS0XlP, 0.0f); // __sub
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_untitled_adf9e3cef0d1::~Heavy_untitled_adf9e3cef0d1() {
  // nothing to free
}

HvTable *Heavy_untitled_adf9e3cef0d1::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_untitled_adf9e3cef0d1::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vCXQkZey_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_untitled_adf9e3cef0d1::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 0;
}



/*
 * Send Function Implementations
 */


void Heavy_untitled_adf9e3cef0d1::cCast_l7NYXlDx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_kKPT31pL, 0, m, &cDelay_kKPT31pL_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_VyGjlv8H_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_wjjPRD9l_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_wjjPRD9l_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_kKPT31pL, 1, m, &cDelay_kKPT31pL_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l7NYXlDx_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_wjjPRD9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_kKPT31pL, 0, m, &cDelay_kKPT31pL_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cDelay_kKPT31pL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_kKPT31pL, m);
  cMsg_58QQQpvX_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_58QQQpvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 200.0f);
  cSwitchcase_O9I5FxQJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cDelay_bDXyAGkg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bDXyAGkg, m);
  cMsg_JwY4ePBe_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_g0U7OH78_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bDXyAGkg, 0, m, &cDelay_bDXyAGkg_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_Csh7MKcM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bDXyAGkg, 0, m, &cDelay_bDXyAGkg_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_Ff0ZEz5u_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_g0U7OH78_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_g0U7OH78_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_bDXyAGkg, 1, m, &cDelay_bDXyAGkg_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Csh7MKcM_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_JwY4ePBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 160.0f);
  msg_setFloat(m, 1, 10.0f);
  cSwitchcase_HkPYrhgD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cReceive_vCXQkZey_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b1PMWNcH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8BokTLog, 0, m, &cVar_8BokTLog_sendMessage);
  cMsg_7NeheNXA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5r1jz5rv, 0, m, &cVar_5r1jz5rv_sendMessage);
  cMsg_l9pkZRJi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0wnkE7bP, 0, m, &cVar_0wnkE7bP_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0hAwXbFm, 0, m, &cVar_0hAwXbFm_sendMessage);
  cMsg_Wqhpdffn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gSk693sR, 0, m, &cVar_gSk693sR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mmtTGHOJ, 0, m, &cVar_mmtTGHOJ_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_BywJqmEx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "pd");
  msg_setSymbol(m, 1, "dsp");
  msg_setElementToFrom(m, 2, n, 0);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_qGFYiY3B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 250.0f);
  cSwitchcase_HkPYrhgD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_7BNzm6TF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 135.0f);
  msg_setFloat(m, 1, 10.0f);
  cSwitchcase_O9I5FxQJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cCast_xfAhaEfX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jm4GjAyW, 0, m, &cDelay_jm4GjAyW_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_azVQKsvL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_1UqA0RAB_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_1UqA0RAB_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_jm4GjAyW, 1, m, &cDelay_jm4GjAyW_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xfAhaEfX_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_1UqA0RAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_jm4GjAyW, 0, m, &cDelay_jm4GjAyW_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cDelay_jm4GjAyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jm4GjAyW, m);
  cMsg_qGFYiY3B_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_QSNP00OJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vgxdOnL2, 1, m, &cVar_vgxdOnL2_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_vgxdOnL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_QSNP00OJ_sendMessage);
  cMsg_BywJqmEx_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_qXwsZXtZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7BNzm6TF_sendMessage(_c, 0, m);
  cSwitchcase_VyGjlv8H_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ff0ZEz5u_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_azVQKsvL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_DLIvdgXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_ceXFe9bo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cCast_P8CYWgjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DLIvdgXq_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_zh1J9atX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sL1ZrlnB, 0, m, &cVar_sL1ZrlnB_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_on38ntUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yjk4bbEX_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_tt2shngk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ceXFe9bo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_CQN6Unfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4zvCPDa5_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_AjgIW9Hm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0wnkE7bP, 0, m, &cVar_0wnkE7bP_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_wdckPFj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bDrxU5c, HV_BINOP_DIVIDE, 0, m, &cBinop_2bDrxU5c_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_xrHQBHmE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NtNLR98I, 1, m, &cVar_NtNLR98I_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_qrzNkQLa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vUiv5qVC_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_4zvCPDa5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aFHMUEIn, 1, m, &cVar_aFHMUEIn_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_ucSsM2oy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WxdmIGCf, HV_BINOP_MULTIPLY, 0, m, &cBinop_WxdmIGCf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bDrxU5c, HV_BINOP_DIVIDE, 1, m, &cBinop_2bDrxU5c_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8BokTLog, 0, m, &cVar_8BokTLog_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_bYNoFvua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J4vtCjLX, 1, m, &cVar_J4vtCjLX_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_gry09gHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J4vtCjLX, 0, m, &cVar_J4vtCjLX_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_yjk4bbEX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ceXFe9bo_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_AjgIW9Hm, HV_BINOP_ADD, 1, m, &cBinop_AjgIW9Hm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrHQBHmE, HV_BINOP_ADD, 1, m, &cBinop_xrHQBHmE_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_xuAzQyW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aFHMUEIn, 1, m, &cVar_aFHMUEIn_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSlice_noDVivUb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bYNoFvua_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_scMw1J8g_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSlice_fHbH9lWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sz3ct78l_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wdckPFj9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cBinop_IhT5JNkv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AjgIW9Hm, HV_BINOP_ADD, 1, m, &cBinop_AjgIW9Hm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrHQBHmE, HV_BINOP_ADD, 1, m, &cBinop_xrHQBHmE_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_2bDrxU5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IhT5JNkv, HV_BINOP_DIVIDE, 1, m, &cBinop_IhT5JNkv_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSlice_FGZYbSrZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c2XAFsvK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dd7omGz9_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c2XAFsvK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dd7omGz9_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSlice_kTVUA6Qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_tt2shngk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_tt2shngk_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_O9I5FxQJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kTVUA6Qm, 0, m, &cSlice_kTVUA6Qm_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FGZYbSrZ, 0, m, &cSlice_FGZYbSrZ_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zh1J9atX_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_fHbH9lWy, 0, m, &cSlice_fHbH9lWy_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_noDVivUb, 0, m, &cSlice_noDVivUb_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P8CYWgjP_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qrzNkQLa_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cBinop_VQbxzryu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5BrSryRy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_56l58M5i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_11fBnx7U_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_ceXFe9bo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_s12UD5gT_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_s12UD5gT_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pEDeE4p6_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_s12UD5gT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_cALDQwxX, 0, m, &cDelay_cALDQwxX_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_qGHtK1QY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_56l58M5i, HV_BINOP_MULTIPLY, 1, m, &cBinop_56l58M5i_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_pEDeE4p6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s12UD5gT_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_cALDQwxX, 0, m, &cDelay_cALDQwxX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_aFHMUEIn, 0, m, &cVar_aFHMUEIn_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_8BokTLog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_56l58M5i, HV_BINOP_MULTIPLY, 0, m, &cBinop_56l58M5i_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cDelay_cALDQwxX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_cALDQwxX, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_cALDQwxX, 0, m, &cDelay_cALDQwxX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_aFHMUEIn, 0, m, &cVar_aFHMUEIn_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSystem_rxxqcpAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qGHtK1QY_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_b1PMWNcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rxxqcpAE_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_11fBnx7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_cALDQwxX, 2, m, &cDelay_cALDQwxX_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_J4vtCjLX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NtNLR98I, 0, m, &cVar_NtNLR98I_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_6SmWlfdv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xuAzQyW6, HV_BINOP_SUBTRACT, 1, m, &cBinop_xuAzQyW6_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_WxdmIGCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6SmWlfdv_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_BBxkHYXS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IhT5JNkv, HV_BINOP_DIVIDE, 0, m, &cBinop_IhT5JNkv_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_Sz3ct78l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CQN6Unfy, HV_BINOP_MULTIPLY, 0, m, &cBinop_CQN6Unfy_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_NtNLR98I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrHQBHmE, HV_BINOP_ADD, 0, m, &cBinop_xrHQBHmE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_AjgIW9Hm, HV_BINOP_ADD, 0, m, &cBinop_AjgIW9Hm_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_4xXl6QTJ, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_scMw1J8g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BBxkHYXS, HV_BINOP_SUBTRACT, 0, m, &cBinop_BBxkHYXS_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_c2XAFsvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tt2shngk_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cVar_aFHMUEIn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xuAzQyW6, HV_BINOP_SUBTRACT, 0, m, &cBinop_xuAzQyW6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_VQbxzryu_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_l9pkZRJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UP3WfFV4_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSystem_UP3WfFV4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WxdmIGCf, HV_BINOP_MULTIPLY, 1, m, &cBinop_WxdmIGCf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CQN6Unfy, HV_BINOP_MULTIPLY, 1, m, &cBinop_CQN6Unfy_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_0wnkE7bP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BBxkHYXS, HV_BINOP_SUBTRACT, 1, m, &cBinop_BBxkHYXS_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_0hAwXbFm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gNLS4MYp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cVar_sL1ZrlnB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sz3ct78l_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wdckPFj9_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_vUiv5qVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_sL1ZrlnB, 1, m, &cVar_sL1ZrlnB_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_GgFbtEZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_on38ntUO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gry09gHF_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_YYmRXqwC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NtNLR98I, 0, m, &cVar_NtNLR98I_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_5BrSryRy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YYmRXqwC_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GgFbtEZc_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cCast_dd7omGz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_32hEhe1A_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_AjgIW9Hm, HV_BINOP_ADD, 0, m, &cBinop_AjgIW9Hm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_NtNLR98I, 1, m, &cVar_NtNLR98I_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_32hEhe1A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yjk4bbEX_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_JXFd1DnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ucSsM2oy_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_gNLS4MYp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JXFd1DnQ_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_WxdmIGCf, HV_BINOP_MULTIPLY, 0, m, &cBinop_WxdmIGCf_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_2bDrxU5c, HV_BINOP_DIVIDE, 1, m, &cBinop_2bDrxU5c_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_8BokTLog, 0, m, &cVar_8BokTLog_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cCast_3z5qTxxc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kxqJS2Wk, HV_BINOP_MULTIPLY, 0, m, &cBinop_kxqJS2Wk_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_1Qu9NJKB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QY9vy1ut_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_mG2VGHzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ya8dmWeU, 0, m, &cVar_ya8dmWeU_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_nuCa4ShO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QNJzffHa, HV_BINOP_ADD, 1, m, &cBinop_QNJzffHa_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7n5Svxq0, HV_BINOP_ADD, 1, m, &cBinop_7n5Svxq0_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_QyBtlzQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7n5Svxq0, HV_BINOP_ADD, 0, m, &cBinop_7n5Svxq0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QNJzffHa, HV_BINOP_ADD, 0, m, &cBinop_QNJzffHa_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_qVFwGLFa, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cCast_JfJgp4NY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ya8dmWeU, 1, m, &cVar_ya8dmWeU_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_ziXX69RK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ErqS0XlP, HV_BINOP_SUBTRACT, 1, m, &cBinop_ErqS0XlP_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_kxqJS2Wk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_iyVk6TiW_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_hrA7B4PQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dEoFoBqT_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_tSJ8nbJf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hrA7B4PQ_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_MSWBuu91, HV_BINOP_MULTIPLY, 0, m, &cBinop_MSWBuu91_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_xUA1Zzyt, HV_BINOP_DIVIDE, 1, m, &cBinop_xUA1Zzyt_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_5r1jz5rv, 0, m, &cVar_5r1jz5rv_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cCast_zZs6GIPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vtikjsz, HV_BINOP_SUBTRACT, 0, m, &cBinop_4vtikjsz_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_RJpk5p98_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_A8HI4rb5_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_8zWNJvcl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4VtZZRoL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XFeQ1zVK, 0, m, &cDelay_XFeQ1zVK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ItcbTmun, 0, m, &cVar_ItcbTmun_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSystem_laSOms6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fH7C9dTE_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_7NeheNXA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_laSOms6J_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_fH7C9dTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJpk5p98, HV_BINOP_MULTIPLY, 1, m, &cBinop_RJpk5p98_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_5r1jz5rv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RJpk5p98, HV_BINOP_MULTIPLY, 0, m, &cBinop_RJpk5p98_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cDelay_XFeQ1zVK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XFeQ1zVK, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XFeQ1zVK, 0, m, &cDelay_XFeQ1zVK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ItcbTmun, 0, m, &cVar_ItcbTmun_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_8OWSlIuF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_4VtZZRoL_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_4VtZZRoL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8zWNJvcl_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_4VtZZRoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_XFeQ1zVK, 0, m, &cDelay_XFeQ1zVK_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_A8HI4rb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_XFeQ1zVK, 2, m, &cDelay_XFeQ1zVK_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_QY9vy1ut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_qCQnGw1O, 1, m, &cVar_qCQnGw1O_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_7n5Svxq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QyBtlzQ9, 1, m, &cVar_QyBtlzQ9_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_Zpathm59_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i5ipwwDc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QNJzffHa, HV_BINOP_ADD, 0, m, &cBinop_QNJzffHa_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_QyBtlzQ9, 1, m, &cVar_QyBtlzQ9_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_5E10R2uw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pL5wUSAy_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_4vtikjsz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nuCa4ShO, HV_BINOP_DIVIDE, 0, m, &cBinop_nuCa4ShO_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSlice_LbKn3Tr6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JfJgp4NY_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zZs6GIPI_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSlice_Ihl8v933_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3z5qTxxc_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tLAy9IJf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cCast_tLAy9IJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xUA1Zzyt, HV_BINOP_DIVIDE, 0, m, &cBinop_xUA1Zzyt_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_MSWBuu91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ziXX69RK_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_haf3KSGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_8OWSlIuF_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QNJzffHa, HV_BINOP_ADD, 1, m, &cBinop_QNJzffHa_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7n5Svxq0, HV_BINOP_ADD, 1, m, &cBinop_7n5Svxq0_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_ykTBjAi1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_oRRhodTO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_xUA1Zzyt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nuCa4ShO, HV_BINOP_DIVIDE, 1, m, &cBinop_nuCa4ShO_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cVar_mmtTGHOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_tSJ8nbJf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cVar_gSk693sR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vtikjsz, HV_BINOP_SUBTRACT, 1, m, &cBinop_4vtikjsz_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_iyVk6TiW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ItcbTmun, 1, m, &cVar_ItcbTmun_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_XDMLUOEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mI6N1Urt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mG2VGHzJ_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_2iPTsNLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QyBtlzQ9, 0, m, &cVar_QyBtlzQ9_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_oRRhodTO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2iPTsNLi_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XDMLUOEo_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cMsg_dEoFoBqT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MSWBuu91, HV_BINOP_MULTIPLY, 0, m, &cBinop_MSWBuu91_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xUA1Zzyt, HV_BINOP_DIVIDE, 1, m, &cBinop_xUA1Zzyt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5r1jz5rv, 0, m, &cVar_5r1jz5rv_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cSlice_cjrnEvBs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_pL5wUSAy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_pL5wUSAy_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSlice_H4IDzaZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5E10R2uw_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Zpathm59_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5E10R2uw_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Zpathm59_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_untitled_adf9e3cef0d1::cSwitchcase_HkPYrhgD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_cjrnEvBs, 0, m, &cSlice_cjrnEvBs_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_H4IDzaZj, 0, m, &cSlice_H4IDzaZj_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nlNsOvwM_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ihl8v933, 0, m, &cSlice_Ihl8v933_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_LbKn3Tr6, 0, m, &cSlice_LbKn3Tr6_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4yeO4Vzo_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1Qu9NJKB_sendMessage);
      break;
    }
  }
}

void Heavy_untitled_adf9e3cef0d1::cVar_ya8dmWeU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QyBtlzQ9, 0, m, &cVar_QyBtlzQ9_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_pL5wUSAy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_8OWSlIuF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cCast_nlNsOvwM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qCQnGw1O, 0, m, &cVar_qCQnGw1O_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_QNJzffHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gSk693sR, 0, m, &cVar_gSk693sR_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_8wzzoHTK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_8OWSlIuF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_untitled_adf9e3cef0d1::cCast_mI6N1Urt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_haf3KSGs_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cVar_ItcbTmun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ErqS0XlP, HV_BINOP_SUBTRACT, 0, m, &cBinop_ErqS0XlP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_ykTBjAi1_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_i5ipwwDc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_haf3KSGs_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cVar_qCQnGw1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3z5qTxxc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tLAy9IJf_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cCast_4yeO4Vzo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8wzzoHTK_sendMessage(_c, 0, m);
}

void Heavy_untitled_adf9e3cef0d1::cSystem_DVl7wHBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MSWBuu91, HV_BINOP_MULTIPLY, 1, m, &cBinop_MSWBuu91_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_kxqJS2Wk, HV_BINOP_MULTIPLY, 1, m, &cBinop_kxqJS2Wk_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cMsg_Wqhpdffn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DVl7wHBw_sendMessage);
}

void Heavy_untitled_adf9e3cef0d1::cBinop_ErqS0XlP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ItcbTmun, 1, m, &cVar_ItcbTmun_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_untitled_adf9e3cef0d1::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5;

  // input and output vars
  hv_bufferf_t O0, O1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_phasor_k_f(&sPhasor_4xXl6QTJ, VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f);
    __hv_var_k_f(VOf(Bf4), -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f);
    __hv_fma_f(VIf(Bf2), VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f);
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O0), VOf(O0));
    __hv_phasor_k_f(&sPhasor_qVFwGLFa, VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f, 6.28318530718f);
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f, 0.00783333333333f);
    __hv_var_k_f(VOf(Bf5), -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f, -0.166666666667f);
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf1), VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 0.6f, 0.6f, 0.6f, 0.6f, 0.6f, 0.6f, 0.6f, 0.6f);
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_add_f(VIf(Bf2), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed
}

int Heavy_untitled_adf9e3cef0d1::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s)
  float **const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_untitled_adf9e3cef0d1::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s), uninterleave
  float *const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
