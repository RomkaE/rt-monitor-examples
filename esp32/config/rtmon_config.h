
#ifndef RTMON_CONFIG_H_
#define RTMON_CONFIG_H_

#include "sdkconfig.h"

#define RTMON_CFG_USE_STATIC_ALOCATION      ( 0 )

#define RTMON_CFG_TASK_STACK_DEPTH          ( 2 * 1024 )

#define RTMON_CFG_TASKS_MAX_COUNT           ( 16 )

#define RTMON_CFG_UPDATE_PERIOD_MS          ( 1000 )

#define RTMON_CFG_LINE_BUFF_SIZE            ( 64 )

#define RTMON_CFG_PERCENT_SCALE             ( 10 )

#define RTMON_CFG_VIEW_DEBUG_INFO           ( 1 )

#define RTMON_CFG_UART_NUM                  ( UART_NUM_2 )
#define RTMON_CFG_TX_PIN                    ( GPIO_NUM_17 )

// Compatible defines:
#if !CONFIG_FREERTOS_SMP
#define TICK_TYPE_WIDTH_16_BITS     0
#define TICK_TYPE_WIDTH_32_BITS     1
#define TICK_TYPE_WIDTH_64_BITS     2
#if CONFIG_FREERTOS_RUN_TIME_COUNTER_TYPE_U32
  #define configRUN_TIME_COUNTER_TYPE    uint32_t
  #define configRUN_TIME_TYPE_WIDTH      TICK_TYPE_WIDTH_32_BITS
#elif CONFIG_FREERTOS_RUN_TIME_COUNTER_TYPE_U64
  #define configRUN_TIME_COUNTER_TYPE    uint64_t
  #define configRUN_TIME_TYPE_WIDTH      TICK_TYPE_WIDTH_64_BITS
  #endif /* CONFIG_FREERTOS_RUN_TIME_COUNTER_TYPE_U64 */
#endif /* !CONFIG_FREERTOS_SMP */

#endif /* RTMON_CONFIG_H_ */
