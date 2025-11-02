
#ifndef RTMON_CONFIG_H_
#define RTMON_CONFIG_H_

#include "esp_system.h"

#define RTMON_CFG_USE_STATIC_ALOCATION      ( 0 )

#define RTMON_CFG_TASK_STACK_DEPTH          ( 256 )

#define RTMON_CFG_TASKS_MAX_COUNT           ( 8 )

#define RTMON_CFG_UPDATE_PERIOD_MS          ( 1000 )

#define RTMON_CFG_LINE_BUFF_SIZE            ( 64 )

#define RTMON_CFG_PERCENT_SCALE             ( 100 )

#define RTMON_CFG_VIEW_DEBUG_INFO           ( 0 )

#define RTMON_CFG_UART_NUM                  ( UART_NUM_1 )

// Compatible defines:
#define TICK_TYPE_WIDTH_16_BITS     0
#define TICK_TYPE_WIDTH_32_BITS     1
#define TICK_TYPE_WIDTH_64_BITS     2
#define configRUN_TIME_TYPE_WIDTH           TICK_TYPE_WIDTH_32_BITS
#define configRUN_TIME_COUNTER_TYPE         uint32_t

#define xPortGetFreeHeapSize()              esp_get_free_heap_size()
#define xPortGetMinimumEverFreeHeapSize()   esp_get_minimum_free_heap_size()

#endif /* RTMON_CONFIG_H_ */
