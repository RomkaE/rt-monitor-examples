
set(RTMON_DIR_PATH ../../third-party/rt-monitor)

set(srcs "")
list(APPEND srcs ${RTMON_DIR_PATH}/rtmon.c)
list(APPEND srcs ${RTMON_DIR_PATH}/port/ESP8266/port.c)

set(priv_incs "")
list(APPEND priv_incs ../config)
list(APPEND priv_incs ${RTMON_DIR_PATH}/port)

idf_component_register( SRCS ${srcs}
                        INCLUDE_DIRS ${RTMON_DIR_PATH}
                        PRIV_INCLUDE_DIRS ${priv_incs}
                        REQUIRES )

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
