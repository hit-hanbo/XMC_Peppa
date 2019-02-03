/*********************************************************************************************************************
* DAVE APP Name : DAC_LUT       APP Version: 4.1.16
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2018, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-20:
 *     - Initial version<br>
 *
 * 2015-06-20:
 *     - DMA support added.<br>
 *
 * 2015-09-03
 *     - Added Dummy read code for pdisc - Applicable for all Micrcontroller series. <br>

 * 2018-02-14
 *     - APP instance renaming bugfix in DAC_LUT_DMABlockTransferEvntHandler() <br>
 * @endcond
 *
 */
/***********************************************************************************************************************
 * HEADER FILES                                                                                                      
 **********************************************************************************************************************/
#include "dac_lut.h"
#include "peppa.h"

/**********************************************************************************************************************
 * DATA STRUCTURES
 **********************************************************************************************************************/

/* DAC Channel Configuration */
XMC_DAC_CH_CONFIG_t DAC_LUT_0_Channel_Config = 
{
   .data_type       = (uint8_t)XMC_DAC_CH_DATA_TYPE_UNSIGNED,     
   .output_negation = (uint8_t)XMC_DAC_CH_OUTPUT_NEGATION_DISABLED,
   .output_scale    = (uint8_t)XMC_DAC_CH_OUTPUT_SCALE_NONE,     
   .output_offset   = 0U
};


DAC_LUT_ISR_Handle_t DAC_LUT_0_Interrupt_Config =
{
  .node_id      = 43U,
  .priority     = 63U,
  .sub_priority = 0U
};

/* Second DAC Channel Configuration */
XMC_DAC_CH_CONFIG_t DAC_LUT_0_Sync_Channel_Config = 
{
   .data_type       = (uint8_t)XMC_DAC_CH_DATA_TYPE_UNSIGNED,     
   .output_negation = (uint8_t)XMC_DAC_CH_OUTPUT_NEGATION_DISABLED,
   .output_scale    = (uint8_t)XMC_DAC_CH_OUTPUT_SCALE_NONE,     
   .output_offset   = 0
};



/* Data Mode initialization */
DAC_LUT_t DAC_LUT_0 =
{
  .module_ptr                    = (XMC_DAC_t  * )(void *)DAC,
  .config_ptr                    = &DAC_LUT_0_Channel_Config,

#if (DAC_LUT_ANALOG_IO_USED == 1U)
  .analog_io_config_ptr          = NULL,
#endif
  .sync_config_ptr               = &DAC_LUT_0_Sync_Channel_Config,
  .wave_lut_ptr                  = (uint32_t * )(void *)X_LUT,
  .wave_lut_coupled_ptr          = (uint32_t * )(void *)Y_LUT,
  .refill_sel                    = DAC_LUT_REFILL_AUTO_INTERRUPT,
  .isr_config_ptr                = &DAC_LUT_0_Interrupt_Config,
  .data_type                     = DAC_LUT_DATATYPE_12_BIT,
  .data_type_sync_ch             = DAC_LUT_DATATYPE_12_BIT,
  .wavegen_start_index           = 0U,
  .wavegen_sync_start_index      = 0U,
  .wavegen_current_index         = 0U,
  .wavegen_sync_current_index    = 0U,   
  .wavegen_lut_lenght            = HB_LUT_LENGTH,
  .wavegen_sync_lut_lenght       = HB_LUT_LENGTH,
  .wavegen_repetition_cycle      = 0U,
  .wavegen_sync_repetition_cycle = 0U,
  .wavegen_current_cycle         = 0,
  .wavegen_sync_current_cycle    = 0,
  .input_trigger                 = XMC_DAC_CH_TRIGGER_INTERNAL,
  .frequency                     = 400000U,
  .dac_data_reg_ptr              = &DAC->DAC01DATA,
  .service_request               = 1U,
  .ch                            = 1U,
  .sync_ch                       = 0U,
  .state                         = DAC_LUT_STATE_UNINITIALIZED,
  .start_after_init              = 0U,
};

/**********************************************************************************************************************
 * API IMPLEMENTATION
 **********************************************************************************************************************/
/**
  * @brief This is the DAC_LUT Interrupt Handler in this Handler
  * LUT Points are Transferred to the DAC Data Register
  */
void Refill_Auto_Interrupt_Handler(void)
{
  DAC_LUT_UpdateNextPoint(&DAC_LUT_0);
}

  /*DAC App is not mapped for app instant: DAC_LUT_0 */