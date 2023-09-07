/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "LightControlSWC"
   ARXML schema: "4.2"
   File generated on: "07-Sep-2023 15:57:14"  */

#ifndef Rte_LightControlSWC_h
#define Rte_LightControlSWC_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_RE_LightControl_RPortControlLightCmd_DEControlLightCmd Rte_IRead_LightControlSWC_RE_LightControl_RPortControlLightCmd_DEControlLightCmd

Double Rte_IRead_RE_LightControl_RPortControlLightCmd_DEControlLightCmd(void);

#define Rte_IWrite_RE_LightControl_PPortSendLightType_DESendLightTyep Rte_IWrite_LightControlSWC_RE_LightControl_PPortSendLightType_DESendLightTyep

void Rte_IWrite_RE_LightControl_PPortSendLightType_DESendLightTyep(Double u);

#define Rte_IWriteRef_RE_LightControl_PPortSendLightType_DESendLightTyep Rte_IWriteRef_LightControlSWC_RE_LightControl_PPortSendLightType_DESendLightTyep

Double* Rte_IWriteRef_RE_LightControl_PPortSendLightType_DESendLightTyep(void);

#define Rte_IWrite_RE_LightControl_PPortSendLightState_DESendLightState Rte_IWrite_LightControlSWC_RE_LightControl_PPortSendLightState_DESendLightState

void Rte_IWrite_RE_LightControl_PPortSendLightState_DESendLightState(Double u);

#define Rte_IWriteRef_RE_LightControl_PPortSendLightState_DESendLightState Rte_IWriteRef_LightControlSWC_RE_LightControl_PPortSendLightState_DESendLightState

Double* Rte_IWriteRef_RE_LightControl_PPortSendLightState_DESendLightState(void);

#define Rte_IWrite_LightControl_Init_PPortSendLightState_DESendLightState Rte_IWrite_LightControlSWC_LightControl_Init_PPortSendLightState_DESendLightState

void Rte_IWrite_LightControl_Init_PPortSendLightState_DESendLightState(Double u);

#define Rte_IWriteRef_LightControl_Init_PPortSendLightState_DESendLightState Rte_IWriteRef_LightControlSWC_LightControl_Init_PPortSendLightState_DESendLightState

Double* Rte_IWriteRef_LightControl_Init_PPortSendLightState_DESendLightState
  (void);

/* IRV functions */
#define Rte_IrvIRead_RE_LightControl_IRV_JudgeLightState Rte_IrvIRead_LightControlSWC_RE_LightControl_IRV_JudgeLightState

SInt8 Rte_IrvIRead_RE_LightControl_IRV_JudgeLightState(void);

#define Rte_IrvIWrite_RE_JudgeLightState_IRV_JudgeLightState Rte_IrvIWrite_LightControlSWC_RE_JudgeLightState_IRV_JudgeLightState

void Rte_IrvIWrite_RE_JudgeLightState_IRV_JudgeLightState(SInt8 u);

/* Entry point functions */
extern FUNC(void, LightControlSWC_CODE) RE_LightControl(void);
extern FUNC(void, LightControlSWC_CODE) LightControl_Init(void);
extern FUNC(void, LightControlSWC_CODE) RE_JudgeLightState(void);

/* Server operation call points */
#define Rte_Call_RPortSetLightState_OPSetLightState Rte_Call_LightControlSWC_RPortSetLightState_OPSetLightState

Std_ReturnType Rte_Call_RPortSetLightState_OPSetLightState(SInt8 DESetLightState);

#define Rte_Call_RPortGetLightState_OPGetLightState Rte_Call_LightControlSWC_RPortGetLightState_OPGetLightState

Std_ReturnType Rte_Call_RPortGetLightState_OPGetLightState(UInt8*
  DEGetLightState);

#endif
