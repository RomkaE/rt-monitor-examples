
#ifndef RTMON_CONFIG_H_
#define RTMON_CONFIG_H_

//#include "sdkconfig.h"

#define RTMON_CFG_TASK_STACK_DEPTH          ( 256 )

#define RTMON_CFG_TASKS_MAX_COUNT           ( 8 )

#define RTMON_CFG_UPDATE_PERIOD_MS          ( 1000 )

#define RTMON_CFG_LINE_BUFF_SIZE            ( 64 )

#define RTMON_CFG_PERCENT_SCALE             ( 100 )

#define RTMON_CFG_VIEW_DEBUG_INFO           ( 0 )

#define RTMON_CFG_UART_NUM                  ( UART_NUM_2 )
#define RTMON_CFG_TX_PIN                    ( GPIO_NUM_17 )
#define RTMON_CFG_RX_PIN                    ( GPIO_NUM_16  )

#endif /* RTMON_CONFIG_H_ */
