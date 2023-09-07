/*
 * File: LightControlSWC.h
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

#ifndef RTW_HEADER_LightControlSWC_h_
#define RTW_HEADER_LightControlSWC_h_
#ifndef LightControlSWC_COMMON_INCLUDES_
#define LightControlSWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LightControlSWC.h"
#endif                                 /* LightControlSWC_COMMON_INCLUDES_ */

#include "LightControlSWC_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float64 OutportBufferForOut2;        /* '<S2>/Constant' */
} ARID_DEF_LightControlSWC_T;

/* Invariant block signals (default storage) */
typedef struct {
  const float64 Constant;              /* '<S2>/Constant' */
} ConstB_LightControlSWC_T;

/* PublicStructure Variables for Internal Data */
extern VAR(ARID_DEF_LightControlSWC_T, LightControlSWC_VAR_INIT)
  LightControlSWC_ARID_DEF;

/* '<S2>/Constant' */
extern CONST(ConstB_LightControlSWC_T, LightControlSWC_VAR_INIT)
  LightControlSWC_ConstB;              /* constant block i/o */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LightControlSWC'
 * '<S1>'   : 'LightControlSWC/RE_JudgeLightState'
 * '<S2>'   : 'LightControlSWC/RE_LightControl'
 */
#endif                                 /* RTW_HEADER_LightControlSWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
