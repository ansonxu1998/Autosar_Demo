/*
 * File: LightControlSWC.c
 *
 * Code generated for Simulink model 'LightControlSWC'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Sep  7 15:57:05 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LightControlSWC.h"
#include "rtwtypes.h"

/* PublicStructure Variables for Internal Data */
VAR(ARID_DEF_LightControlSWC_T, LightControlSWC_VAR_INIT)
  LightControlSWC_ARID_DEF;

/* '<S2>/Constant' */

/* Model step function for TID1 */
FUNC(void, LightControlSWC_CODE) RE_JudgeLightState(void)
                                      /* Explicit Task: Event_JudgeLightState */
{
  uint8 rtb_FunctionCaller;

  /* RootInportFunctionCallGenerator generated from: '<Root>/Event_JudgeLightState' incorporates:
   *  SubSystem: '<Root>/RE_JudgeLightState'
   */
  /* FunctionCaller: '<S1>/Function Caller' */
  Rte_Call_RPortGetLightState_OPGetLightState(&rtb_FunctionCaller);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Event_JudgeLightState' */

  /* RootInportFunctionCallGenerator generated from: '<Root>/Event_JudgeLightState' incorporates:
   *  SubSystem: '<Root>/RE_JudgeLightState'
   */

  /* DataTransferBlock generated from: '<Root>/RE_JudgeLightState' incorporates:
   *  Switch: '<S1>/Switch'
   */
  Rte_IrvIWrite_RE_JudgeLightState_IRV_JudgeLightState((sint8)
    (rtb_FunctionCaller > 4));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Event_JudgeLightState' */
}

/* Output function */
FUNC(void, LightControlSWC_CODE) RE_LightControl(void)
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' incorporates:
   *  SubSystem: '<Root>/RE_LightControl'
   */
  /* SignalConversion generated from: '<S2>/Out2' */
  LightControlSWC_ARID_DEF.OutportBufferForOut2 =
    LightControlSWC_ConstB.Constant;

  /* FunctionCaller: '<S2>/Function Caller' incorporates:
   *  DataTransferBlock generated from: '<Root>/RE_JudgeLightState'
   */
  Rte_Call_RPortSetLightState_OPSetLightState
    (Rte_IrvIRead_RE_LightControl_IRV_JudgeLightState());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' */

  /* RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' incorporates:
   *  SubSystem: '<Root>/RE_LightControl'
   */

  /* Outport: '<Root>/DESendLightType' incorporates:
   *  Inport: '<Root>/DEControlLightCmd'
   *  SignalConversion generated from: '<S2>/In1'
   */
  Rte_IWrite_RE_LightControl_PPortSendLightType_DESendLightTyep
    (Rte_IRead_RE_LightControl_RPortControlLightCmd_DEControlLightCmd());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' */

  /* Outport: '<Root>/DESendLightState' */
  Rte_IWrite_RE_LightControl_PPortSendLightState_DESendLightState
    (LightControlSWC_ARID_DEF.OutportBufferForOut2);
}

/* Model initialize function */
FUNC(void, LightControlSWC_CODE) LightControl_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' incorporates:
   *  SubSystem: '<Root>/RE_LightControl'
   */
  /* SystemInitialize for SignalConversion generated from: '<S2>/Out2' */
  LightControlSWC_ARID_DEF.OutportBufferForOut2 =
    LightControlSWC_ConstB.Constant;

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Event_LighatControl' */

  /* SystemInitialize for Outport: '<Root>/DESendLightState' */
  Rte_IWrite_LightControl_Init_PPortSendLightState_DESendLightState
    (LightControlSWC_ARID_DEF.OutportBufferForOut2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
