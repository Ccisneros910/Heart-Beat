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

#ifndef _HEAVY_CONTEXT_UNTITLED_ADF9E3CEF0D1_HPP_
#define _HEAVY_CONTEXT_UNTITLED_ADF9E3CEF0D1_HPP_

// object includes
#include "HeavyContext.hpp"
#include "HvControlBinop.h"
#include "HvControlVar.h"
#include "HvControlSystem.h"
#include "HvControlSlice.h"
#include "HvSignalVar.h"
#include "HvSignalPhasor.h"
#include "HvControlDelay.h"
#include "HvMath.h"
#include "HvControlCast.h"

class Heavy_untitled_adf9e3cef0d1 : public HeavyContext {

 public:
  Heavy_untitled_adf9e3cef0d1(double sampleRate, int poolKb=10, int inQueueKb=2, int outQueueKb=0);
  ~Heavy_untitled_adf9e3cef0d1();

  const char *getName() override { return "untitled_adf9e3cef0d1"; }
  int getNumInputChannels() override { return 0; }
  int getNumOutputChannels() override { return 2; }

  int process(float **inputBuffers, float **outputBuffer, int n) override;
  int processInline(float *inputBuffers, float *outputBuffer, int n) override;
  int processInlineInterleaved(float *inputBuffers, float *outputBuffer, int n) override;

  int getParameterInfo(int index, HvParameterInfo *info) override;

 private:
  HvTable *getTableForHash(hv_uint32_t tableHash) override;
  void scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) override;

  // static sendMessage functions
  static void cCast_l7NYXlDx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_VyGjlv8H_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_wjjPRD9l_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_kKPT31pL_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_58QQQpvX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_bDXyAGkg_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_g0U7OH78_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_Csh7MKcM_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_Ff0ZEz5u_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_JwY4ePBe_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cReceive_vCXQkZey_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_BywJqmEx_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_qGFYiY3B_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_7BNzm6TF_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_xfAhaEfX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_azVQKsvL_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_1UqA0RAB_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_jm4GjAyW_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_QSNP00OJ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_vgxdOnL2_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_qXwsZXtZ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_DLIvdgXq_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_P8CYWgjP_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_zh1J9atX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_on38ntUO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_tt2shngk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_CQN6Unfy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_AjgIW9Hm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_wdckPFj9_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_xrHQBHmE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_qrzNkQLa_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_4zvCPDa5_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_ucSsM2oy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_bYNoFvua_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_gry09gHF_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_yjk4bbEX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_xuAzQyW6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_noDVivUb_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_fHbH9lWy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_IhT5JNkv_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_2bDrxU5c_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_FGZYbSrZ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_kTVUA6Qm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_O9I5FxQJ_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cBinop_VQbxzryu_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_56l58M5i_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_ceXFe9bo_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_s12UD5gT_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_qGHtK1QY_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_pEDeE4p6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_8BokTLog_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_cALDQwxX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_rxxqcpAE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_b1PMWNcH_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_11fBnx7U_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_J4vtCjLX_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_6SmWlfdv_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_WxdmIGCf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_BBxkHYXS_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_Sz3ct78l_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_NtNLR98I_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_scMw1J8g_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_c2XAFsvK_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_aFHMUEIn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_l9pkZRJi_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_UP3WfFV4_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_0wnkE7bP_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_0hAwXbFm_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_sL1ZrlnB_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_vUiv5qVC_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_GgFbtEZc_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_YYmRXqwC_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_5BrSryRy_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_dd7omGz9_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_32hEhe1A_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_JXFd1DnQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_gNLS4MYp_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_3z5qTxxc_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_1Qu9NJKB_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_mG2VGHzJ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_nuCa4ShO_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_QyBtlzQ9_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_JfJgp4NY_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_ziXX69RK_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_kxqJS2Wk_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_hrA7B4PQ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_tSJ8nbJf_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cCast_zZs6GIPI_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_RJpk5p98_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_8zWNJvcl_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_laSOms6J_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_7NeheNXA_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_fH7C9dTE_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_5r1jz5rv_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cDelay_XFeQ1zVK_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_8OWSlIuF_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_4VtZZRoL_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_A8HI4rb5_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_QY9vy1ut_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_7n5Svxq0_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_Zpathm59_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_5E10R2uw_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_4vtikjsz_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_LbKn3Tr6_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_Ihl8v933_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_tLAy9IJf_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_MSWBuu91_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_haf3KSGs_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_ykTBjAi1_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_xUA1Zzyt_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_mmtTGHOJ_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_gSk693sR_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_iyVk6TiW_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_XDMLUOEo_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_2iPTsNLi_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_oRRhodTO_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cMsg_dEoFoBqT_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_cjrnEvBs_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSlice_H4IDzaZj_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSwitchcase_HkPYrhgD_onMessage(HeavyContextInterface *, void *, int letIn, const HvMessage *const, void *);
  static void cVar_ya8dmWeU_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_pL5wUSAy_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_nlNsOvwM_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_QNJzffHa_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_8wzzoHTK_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_mI6N1Urt_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_ItcbTmun_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_i5ipwwDc_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cVar_qCQnGw1O_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cCast_4yeO4Vzo_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cSystem_DVl7wHBw_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cMsg_Wqhpdffn_sendMessage(HeavyContextInterface *, int, const HvMessage *);
  static void cBinop_ErqS0XlP_sendMessage(HeavyContextInterface *, int, const HvMessage *);

  // objects
  SignalPhasor sPhasor_4xXl6QTJ;
  SignalPhasor sPhasor_qVFwGLFa;
  ControlDelay cDelay_kKPT31pL;
  ControlDelay cDelay_bDXyAGkg;
  ControlDelay cDelay_jm4GjAyW;
  ControlBinop cBinop_QSNP00OJ;
  ControlVar cVar_vgxdOnL2;
  ControlBinop cBinop_CQN6Unfy;
  ControlBinop cBinop_AjgIW9Hm;
  ControlBinop cBinop_xrHQBHmE;
  ControlBinop cBinop_4zvCPDa5;
  ControlBinop cBinop_xuAzQyW6;
  ControlSlice cSlice_noDVivUb;
  ControlSlice cSlice_fHbH9lWy;
  ControlBinop cBinop_IhT5JNkv;
  ControlBinop cBinop_2bDrxU5c;
  ControlSlice cSlice_FGZYbSrZ;
  ControlSlice cSlice_kTVUA6Qm;
  ControlBinop cBinop_VQbxzryu;
  ControlBinop cBinop_56l58M5i;
  ControlBinop cBinop_qGHtK1QY;
  ControlVar cVar_8BokTLog;
  ControlDelay cDelay_cALDQwxX;
  ControlBinop cBinop_11fBnx7U;
  ControlVar cVar_J4vtCjLX;
  ControlBinop cBinop_6SmWlfdv;
  ControlBinop cBinop_WxdmIGCf;
  ControlBinop cBinop_BBxkHYXS;
  ControlVar cVar_NtNLR98I;
  ControlVar cVar_aFHMUEIn;
  ControlVar cVar_0wnkE7bP;
  ControlVar cVar_0hAwXbFm;
  ControlVar cVar_sL1ZrlnB;
  ControlBinop cBinop_nuCa4ShO;
  ControlVar cVar_QyBtlzQ9;
  ControlBinop cBinop_ziXX69RK;
  ControlBinop cBinop_kxqJS2Wk;
  ControlBinop cBinop_RJpk5p98;
  ControlBinop cBinop_fH7C9dTE;
  ControlVar cVar_5r1jz5rv;
  ControlDelay cDelay_XFeQ1zVK;
  ControlBinop cBinop_A8HI4rb5;
  ControlBinop cBinop_7n5Svxq0;
  ControlBinop cBinop_4vtikjsz;
  ControlSlice cSlice_LbKn3Tr6;
  ControlSlice cSlice_Ihl8v933;
  ControlBinop cBinop_MSWBuu91;
  ControlBinop cBinop_ykTBjAi1;
  ControlBinop cBinop_xUA1Zzyt;
  ControlVar cVar_mmtTGHOJ;
  ControlVar cVar_gSk693sR;
  ControlBinop cBinop_iyVk6TiW;
  ControlSlice cSlice_cjrnEvBs;
  ControlSlice cSlice_H4IDzaZj;
  ControlVar cVar_ya8dmWeU;
  ControlBinop cBinop_QNJzffHa;
  ControlVar cVar_ItcbTmun;
  ControlVar cVar_qCQnGw1O;
  ControlBinop cBinop_ErqS0XlP;
};

#endif // _HEAVY_CONTEXT_UNTITLED_ADF9E3CEF0D1_HPP_
