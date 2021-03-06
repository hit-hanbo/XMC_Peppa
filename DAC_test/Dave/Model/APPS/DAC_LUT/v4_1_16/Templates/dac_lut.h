/**
 * @file dac_lut.h
 * @date 2015-1-15
 * This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
 * @cond
 ***********************************************************************************************************************
 * DAC_LUT v4.1.14 - Supports advance waveform generation using look up table(LUT).
 *
 * Copyright (c) 2015, Infineon Technologies AG
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
 *     - Initial version
 *
 * 2015-06-20:
 *     - DMA support added. <br>
 *
 * 2015-12-15:
 *     - ANALOG_IO_Init function call added
 * @endcond
 *
 */
/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#ifndef DAC_LUT_H_
#define DAC_LUT_H_

#include <xmc_dac.h>
#include <DAVE_common.h>
#include "dac_lut_conf.h"
#if (DAC_LUT_DMA_ENABLED == 1U)
#include "GLOBAL_DMA/global_dma.h"
#endif
#if (DAC_LUT_ANALOG_IO_USED == 1U)
#include "../ANALOG_IO/analog_io.h"
#endif
#if (!((XMC_LIB_MAJOR_VERSION == 2U) && \
       (XMC_LIB_MINOR_VERSION >= 0U) && \
       (XMC_LIB_PATCH_VERSION >= 0U)))
#error "DAC_LUT requires XMC Peripheral Library v2.0.0 or higher"
#endif

/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/
  /**
   * @ingroup DAC_LUT_constants
   * @{
   */
#define DAC_LUT_MAX_REPETITION_CYCLES  (32767U)   /**< maximum configurable repetition cycles */
#define DAC_LUT_SHIFT_BY_4             (4U)      /**< Used for converting 16 bit LUT values to 12 bit */
  /**
   * @}
   */
/**********************************************************************************************************************
 * ENUMS
 **********************************************************************************************************************/
  /**
   * @ingroup DAC_LUT_enumerations
   * @{
   */
  /**
   * State of the APP
   */
  typedef enum DAC_LUT_STATE
  {
    DAC_LUT_STATE_UNINITIALIZED, /**< Default state after power on reset */
    DAC_LUT_STATE_INITIALIZED,   /**< INITIALIZED state after execution */
    DAC_LUT_STATE_DMA_ERROR      /**< DMA error occurred during data transfer */

  } DAC_LUT_STATE_t;

  /**
   * DAC_LUT Refill options
   */
  typedef enum DAC_LUT_REFILL
  {
    DAC_LUT_REFILL_MANUAL_SOFTWARE = 0, /**< Refill through Software Interrupt */
    DAC_LUT_REFILL_AUTO_DMA, /**< Refill through DMA */
    DAC_LUT_REFILL_AUTO_INTERRUPT /**< Refill through DAC Service Request Interrupt */

  } DAC_LUT_REFILL_t;

  /**
   * DAC_LUT Status
   */
  typedef enum DAC_LUT_STATUS
  {
    DAC_LUT_STATUS_SUCCESS = 0,   /**< DAC_LUT Initialization successful */
    DAC_LUT_STATUS_FAILURE,       /**< DAC_LUT Initialization failed */
    DAC_LUT_STATUS_OUTOF_RANGE,   /**< Argument passed to API is out of range */
    DAC_LUT_STATUS_NULL_PTR,      /**< Null pointer passed as parameter */
    DAC_LUT_STATUS_DMA_INIT_FAIL, /**< DMA initialization failed */
	DAC_LUT_STATUS_FIFO_FULL      /**< Manual SW refill mode - FIFO full */

  } DAC_LUT_STATUS_t;

  /**
   * DAC_LUT data type options
   */
  typedef enum DAC_LUT_DATATYPE
  {
    DAC_LUT_DATATYPE_12_BIT, /**< 12 bit faster execution */
    DAC_LUT_DATATYPE_16_BIT /**< 16 bit user friendly */

  } DAC_LUT_DATATYPE_t;

  /**
   * @brief Structure for DMA configuration.
   */
  #if (DAC_LUT_DMA_ENABLED == 1U)
  typedef struct DAC_LUT_DMA_CONFIG
  {
    const XMC_DMA_CH_CONFIG_t * dma_ch_config;   /**< Pointer to the DMA channel configuration.*/
    GLOBAL_DMA_t * global_dma;                   /**< Global DMA handle */
    uint8_t dma_channel;                         /**< DMA channel number */
  } DAC_LUT_DMA_CONFIG_t;
  #endif
  /**
   * @}
   */
/**********************************************************************************************************************
 * DATA STRUCTURES
 **********************************************************************************************************************/
  /**
   * @ingroup DAC_LUT_datastructures
   * @{
   */

  /**
   * This structure holds the ISR configuration parameters.
   */
  typedef struct DAC_LUT_ISR_Handle
  {
      uint8_t node_id; /*!< interrupt node id*/
      uint8_t priority; /*!< interrupt priority*/
      uint8_t sub_priority; /*!< interrupt sub priority*/

  } DAC_LUT_ISR_Handle_t;

  /**
   * This structure holds the DAC_LUT parameters of user configured
   * waveform generator.
   */
typedef struct DAC_LUT
{
    /* This structure contains the user configuration */
    XMC_DAC_t             * const module_ptr; /**< DAC Module Pointer */
    XMC_DAC_CH_CONFIG_t   * const config_ptr; /**< DAC Channel Configuration Data */
#if (DAC_LUT_DMA_ENABLED == 1U)
    DAC_LUT_DMA_CONFIG_t  * const dma_config_ptr; /**< DMA configuration structure in DMA refill mode. */
#endif
#if (DAC_LUT_ANALOG_IO_USED == 1U)
  const ANALOG_IO_t        *const analog_io_config_ptr;   /**< This hold the address of the ANALOG_IO configuration structure*/
#endif
    XMC_DAC_CH_CONFIG_t   * const sync_config_ptr; /**< DAC Sync Channel Configuration Data */
    XMC_DAC_CH_TRIGGER_t          input_trigger; /**< DAC Input Trigger */
    DAC_LUT_REFILL_t              refill_sel; /**< Refill option selection */
    DAC_LUT_ISR_Handle_t  * const isr_config_ptr; /**< Interrupt Configuration */
    DAC_LUT_DATATYPE_t            data_type; /**< 12 bit fast execution or 16 bit user friendly */
    DAC_LUT_DATATYPE_t            data_type_sync_ch; /**< 12 bit fast execution/ 16 bit user friendly for 2nd DAC */
    DAC_LUT_STATE_t               state; /**< enumerates the state of the APP. */
    uint32_t                      frequency; /**< DAC Frequency */
    volatile uint32_t *           dac_data_reg_ptr; /**< DAC data register pointer */
    uint16_t                      wavegen_start_index; /**< Waveform generation start index */
    uint16_t                      wavegen_sync_start_index; /**< Waveform generation second DAC start index */
    uint16_t                      wavegen_current_index; /**< Waveform generation current index */
    uint16_t                      wavegen_sync_current_index; /**< Waveform generation second DAC current index */
    uint32_t *                    wave_lut_ptr; /**< Lookup table pointer for CH data*/
    uint32_t *                    wave_lut_coupled_ptr; /**< Lookup table pointer for coupled Mode */
    uint16_t                      wavegen_lut_lenght; /**< Waveform generation lookup table length */
    uint16_t                      wavegen_sync_lut_lenght; /**< Waveform generation lookup table length for 2nd DAC*/
    uint16_t                      wavegen_repetition_cycle; /**< Waveform generation repetition cycles */
    uint16_t                      wavegen_sync_repetition_cycle; /**< Waveform repetition cycles for 2nd DAC */
    int16_t                       wavegen_current_cycle; /**< Waveform generation current repetition cycle */
    int16_t                       wavegen_sync_current_cycle; /**< Waveform current repetition cycle for 2nd DAC */
    uint8_t                       service_request; /**< Service request Enabled/Disabled */
    uint8_t                       ch; /**< DAC CH Number */
    uint8_t                       sync_ch; /**< Second DAC CH Number */
    uint8_t                       start_after_init; /**< Waveform generation starts after initialization */

} DAC_LUT_t;

  /**
   * @}
   */
#ifdef __cplusplus
extern "C"
{
#endif
/***********************************************************************************************************************
 * API Prototypes
 **********************************************************************************************************************/
  /**
   * @ingroup DAC_LUT_apidoc
   * @{
   */
  /**
   * @brief Returns APP version information
   * @param None
   * @return DAVE_APP_VERSION_t Returns APP version number(major, minor and patch number).
   * <BR>
   *
   * \par<b>Description</b><br>
   * Each of the DAVE APP exports a version number(major, minor and patch number).
   * Applications may then audit such a version number to determine compatibility.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAVE_APP_VERSION_t version;
   status = DAVE_Init();		//DAC_LUT_Init(&DAC_LUT_0) will be called internally
   version = DAC_LUT_GetAppVersion();
   if (version.major != 1U)
   {
   // Probably, not the right version.
   }
   while(1);
   return status;
   }
   * @endcode
   */
  DAVE_APP_VERSION_t DAC_LUT_GetAppVersion(void);

  /**
   * @brief Starts waveform generation.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @return None
   * <BR>
   *
   * \par<b>Description</b><br>
   * Starts waveform generation depends upon user configuration by changing mode from Idle to Data mode.
   * If synchronized second DAC is selected then synchronized channel mode will be changed from Idle mode to Data mode.
   * If DMA auto refill mode is selected then in addition enable DMA channel.
   *
   * \par<b>Note</b><br>
   * This API is called internally by DAVE_Init().If start after initialization option is disabled then one has to call this API explicitly.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_Stop()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   DAC_LUT_Start(&DAC_LUT_0);
   while(1);
   return status;
   }
   * @endcode
   */
  void DAC_LUT_Start(DAC_LUT_t * HandlePtr);

  /**
   * @brief Stops waveform generation
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @return None
   * <BR>
   *
   * \par<b>Description</b><br>
   * Stops waveform generation by changing mode to Idle mode.
   * If synchronized second DAC is selected then synchronized channel mode will be changed to Idle mode.
   * If DMA auto refill mode is selected then in addition disable DMA channel.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_Start()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   DAC_LUT_Stop(&DAC_LUT_0);
   while(1);
   return status;
   }
   * @endcode
   */
  void DAC_LUT_Stop(DAC_LUT_t * HandlePtr);

  /**
   * @brief Initializes the DAC_LUT APP as per user configuration.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @return DAC_LUT_STATUS_t Initialization status
   * <BR>
   *
   * \par<b>Description</b><br>
   * Initializes the DAC_LUT APP as per user configuration.
   *
   * \par<b>Note</b><br>
   * This API is called internally by DAVE_Init() function. Should not be called explicitly.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   while(1);
   return status;
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_Init(DAC_LUT_t * HandlePtr);

  /**
   * @brief Configures waveform generation LUT start index.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number
   * @param start_index - Start Index for waveform generation
   * @return DAC_LUT_STATUS_t Returns success if index is less than LUT length.
   * <BR>
   *
   * \par<b>Description</b><br>
   * Configures waveform generation LUT start index for \a ch.With the help of the start index configuration one
   * can adjust the phase difference.
   * If DMA auto refill mode is selected then start index can't be configured through this API.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_SetIndex(),DAC_LUT_GetIndex()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   dac_status = DAC_LUT_SetStartIndex(&DAC_LUT_0,0,12);
   while(1);
   return status;
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_SetStartIndex(DAC_LUT_t * HandlePtr, uint8_t ch, uint16_t start_index);

  /**
   * @brief Configures the current index of LUT table for waveform generation.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number
   * @param index - Waveform generation current index
   * @return DAC_LUT_STATUS_t Returns success if index is less than LUT length.
   * <BR>
   *
   * \par<b>Description</b><br>
   * Configures the waveform generation LUT current index. This API can change the LUT current index in run time.
   * If DMA auto refill mode is selected then set current index can't be configured through this API .
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_GetIndex()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   dac_status = DAC_LUT_SetIndex(&DAC_LUT_0,0,12);
   while(1);
   return status;
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_SetIndex(DAC_LUT_t * HandlePtr, uint8_t ch, uint16_t index);

  /**
   * @brief This function will returns the current index of LUT table for waveform generation.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number - 0/1
   * @return uint16_t - Returns the current index
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will returns the current index of LUT table for waveform generation.
   * If DMA auto refill mode is selected then not possible to retrieve the current index through this API.
   * If this API is called in DMA auto refill mode then this API will return 0.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_SetIndex()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   uint16_t current_index;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   current_index = DAC_LUT_GetIndex(&DAC_LUT_0,0);
   while(1);
   return status;
   }
   * @endcode
   */
  uint16_t DAC_LUT_GetIndex(DAC_LUT_t * HandlePtr, uint8_t ch);

  /**
   * @brief This function will reset the current index to start index.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will reset the current index to start index.
   * If synchronized second DAC is selected then it will reset synchronized channel index to its respective start index.
   * If DMA auto refill mode is selected then this API will reset the DMA source address to the lookup table .
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   DAC_LUT_ResetIndex(&DAC_LUT_0);
   while(1);
   return status;
   }
   * @endcode
   */
  void DAC_LUT_ResetIndex(DAC_LUT_t * HandlePtr);

  /**
   * @brief This function will set the repetition cycles of LUT.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number - 0/1
   * @param repetition - After start waveform will be generated for this many cycles.
   * @return DAC_LUT_STATUS_t Returns success if \a repetition is less than DAC_LUT_MAX_REPETITION_CYCLES
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will set the repetition cycles of LUT of corresponding channel.
   * If DMA is enabled then this API will set the repetition for ch instead of synch channel.
   *
   * \par<b>Note</b><br>
   * In GUI configuration for the selected channel Repetition field should be set to Cycles.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_GetRepetition()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   dac_lut_status = DAC_LUT_SetRepetition(&DAC_LUT_0,0U,2U);
   while(1);
   return status;
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_SetRepetition(DAC_LUT_t * HandlePtr, uint8_t ch, uint16_t repetition);

  /**
   * @brief Returns the configured repetition cycles of LUT.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number - 0/1
   * @return uint16_t - Configured repetition cycles
   * <BR>
   *
   * \par<b>Description</b><br>
   * Returns the configured repetition cycles of LUT for selected channel.
   *
   * \par<b>Note</b><br>
   * In GUI configuration for the selected channel Repetition field should be set to Cycles.
   * If DMA is enabled then always it will return the repetition for ch instead of synch channel.
   *
   * \par<b>Related APIs:</b><BR>
   * DAC_LUT_SetRepetition()
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   uint16_t repetition;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   repetition = DAC_LUT_GetRepetition(&DAC_LUT_0,0);
   while(1);
   return status;
   }
   * @endcode
   */
  uint16_t DAC_LUT_GetRepetition(DAC_LUT_t * HandlePtr, uint8_t ch);

  /**
   * @brief This function will change wave generation LUT pointer to user LUT address.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @param ch - Channel Number - 0/1
   * @param address - LUT address
   * @return DAC_LUT_STATUS_t Returns success if address is not NULL
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will configure wave generation LUT pointer to \a address.
   * If address is not NULL then only it will be assigned to the wave generation LUT pointer.
   * If DMA is enabled then always it will update the LUT address for ch instead of synch channel.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   uint32_t *lut_ptr;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   dac_lut_status = DAC_LUT_ChangeLutAddress(&DAC_LUT_0,0,&lut_ptr);
   while(1);
   return status;
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_ChangeLutAddress(DAC_LUT_t * HandlePtr, uint8_t ch, uint32_t *address);

  /**
   * @brief Configures the amplitude of waveform.
   * @param HandlePtr -DAC_LUT APP instance Handler
   * @param ch - Channel Number - 0/1
   * @param scale - Waveform amplitude of type @ref XMC_DAC_CH_OUTPUT_SCALE_t
   * <BR>
   *
   * \par<b>Description</b><br>
   * Configures the amplitude of waveform using scaling feature.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   uint32_t *lut_ptr;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   DAC_LUT_ScaleValue(&DAC_LUT_0,0,XMC_DAC_CH_OUTPUT_SCALE_MUL_8);
   while(1);
   return status;
   }
   * @endcode
   */
  __STATIC_INLINE void DAC_LUT_ScaleValue(DAC_LUT_t * HandlePtr, uint8_t ch, XMC_DAC_CH_OUTPUT_SCALE_t scale)
  {
    XMC_DAC_CH_SetOutputScale(HandlePtr->module_ptr, ch, scale);
  }

  /**
   * @brief This function will triggers corresponding DAC CH through software.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will triggers corresponding DAC CH through software.
   *
   * \par<b>Note</b><br>
   * DAC channel should be configured for software trigger before calling this API.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   uint32_t *lut_ptr;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally

   while(1);
   return status;
   }

   // Configure PWM APP to generate interrupt on period match.
   // Consume Interrupt APP and connect PWM period match signal through signal configurator.
   // In Interrupt APP mention Interrupt handler name as "PWM_ISR"
   void PWM_ISR(void)
   {
     DAC_LUT_SoftwareTrigger(&DAC_LUT_0);
   }
   * @endcode
   */
  void DAC_LUT_SoftwareTrigger(DAC_LUT_t * HandlePtr);

  /**
   * @brief This function will update the next wave point in LUT for waveform generation in manual software refill mode.
   * @param HandlePtr - DAC_LUT APP instance Handler
   * @return DAC_LUT_STATUS_t Returns DAC_LUT_STATUS_SUCCESS if successfully new wave point transfered to DAC data register.\n
   *                          Returns DAC_LUT_STATUS_FIFO_FULL if DAC FIFO is full, try reducing calling rate for this API.\n
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will update the next point in LUT for waveform generation.
   *
   * \par<b>Note</b><br>
   * Only in manual software refill mode this API should be called explicitly to update the next wave point.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   uint32_t *lut_ptr;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   while(1);
   return status;
   }

   // Configure PWM APP to generate interrupt on period match.
   // Consume Interrupt APP and connect PWM period match signal through signal configurator.
   // In Interrupt APP mention Interrupt handler name as "PWM_ISR"
   void PWM_ISR(void)
   {
     DAC_LUT_ManualSWRefill(&DAC_LUT_0);
   }
   * @endcode
   */
  DAC_LUT_STATUS_t DAC_LUT_ManualSWRefill(DAC_LUT_t * HandlePtr);

/**
 * @}
 */

  /**
   * @brief This function will update the next wave point in LUT for waveform generation
   * @param HandlePtr - DAC_LUT APP instance Handler
   * <BR>
   *
   * \par<b>Description</b><br>
   * This function will update the next point in LUT for waveform generation.
   *
   * \par<b>Note</b><br>
   * This API user should not call explicitly.It is internally called by "Auto Interrupt" refill mode.
   *
   * \par<b>Example Usage:</b><br>
   * @code
   #include <DAVE.h>
   int main (void)
   {
   DAVE_STATUS_t status;
   DAC_LUT_STATUS_t dac_lut_status;
   uint32_t *lut_ptr;
   status = DAVE_Init();		// DAC_LUT_Init(&DAC_LUT_0) will be called internally
   while(1);
   return status;
   }

   // This ISR will be called by DAC service request interrupt.
   void Refill_Auto_Interrupt_Handler(void)
   {
     DAC_LUT_UpdateNextPoint(&DAC_LUT_0);
   }
   * @endcode
   */
  void DAC_LUT_UpdateNextPoint(DAC_LUT_t * HandlePtr);

#include "dac_lut_extern.h"

#ifdef __cplusplus
}
#endif

#endif /* DAC_LUT_H_ */
