
#ifndef RTMON_CONFIG_H_
#define RTMON_CONFIG_H_

#include "esp_system.h"

#define RTMON_CFG_USE_STATIC_ALOCATION      ( 0 )

#define RTMON_CFG_TASK_STACK_DEPTH          ( 2048 )

#define RTMON_CFG_TASKS_MAX_COUNT           ( 16 )

#define RTMON_CFG_UPDATE_PERIOD_MS          ( 1000 )

#define RTMON_CFG_LINE_BUFF_SIZE            ( 64 )

#define RTMON_CFG_PERCENT_SCALE             ( 10 )

#define RTMON_CFG_VIEW_DEBUG_INFO           ( 1 )

#define RTMON_CFG_UART_NUM                  ( UART_NUM_1 )

// Compatible defines:
#define TICK_TYPE_WIDTH_16_BITS     0
#define TICK_TYPE_WIDTH_32_BITS     1
#define TICK_TYPE_WIDTH_64_BITS     2

#ifdef CONFIG_FREERTOS_RUN_TIME_STATS_USING_CPU_CLK
#define configRUN_TIME_TYPE_WIDTH           TICK_TYPE_WIDTH_64_BITS
#define configRUN_TIME_COUNTER_TYPE         uint64_t
#else
#define configRUN_TIME_TYPE_WIDTH           TICK_TYPE_WIDTH_32_BITS
#define configRUN_TIME_COUNTER_TYPE         uint32_t
#endif

#define xPortGetFreeHeapSize()              esp_get_free_heap_size()
#define xPortGetMinimumEverFreeHeapSize()   esp_get_minimum_free_heap_size()

#if defined(CONFIG_FREERTOS_RUN_TIME_STATS_USING_ESP_TIMER)
#define portGET_RUN_TIME_COUNTER_VALUE()    esp_get_time()
#endif

#endif /* RTMON_CONFIG_H_ */
