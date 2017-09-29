LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE       := loggerlib
LOCAL_CFLAGS       += -include limits.h -include unistd.h -include sys/user.h -include signal.h -fvisibility=hidden -DLIBLOG_LOG_TAG=1006 -DSNET_EVENT_LOG_TAG=1397638484 -w
LOCAL_SRC_FILES    += ../properties.c ../pmsg_reader.c ../pmsg_writer.c ../logd_reader.c ../logd_writer.c ../config_read.c ../config_write.c ../local_logger.c ../log_event_list.c ../log_event_write.c ../logger_lock.c ../logger_name.c ../logger_read.c ../logger_write.c ../logprint.c ../threads.c ../fake_socket.c ../event_tag_map.cpp ../log_time.cpp ../sched_policy.cpp
LOCAL_C_INCLUDES   += include ../include
LOCAL_CPPFLAGS    += -include string.h -D__ANDROID_USE_LIBLOG_IS_DEBUGGABLE_INTERFACE=1 -D__ANDROID_USE_LIBLOG_LOGGABLE_INTERFACE=2

include $(BUILD_STATIC_LIBRARY)
