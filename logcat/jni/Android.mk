LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := loggerlib
LOCAL_SRC_FILES := ../../liblog/obj/local/$(TARGET_ARCH_ABI)/libloggerlib.a

include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE    := loggercat
LOCAL_STATIC_LIBRARIES := loggerlib
LOCAL_SRC_FILES := ../logcat2.cpp
LOCAL_CPPFLAGS  := -std=c++1y -D__ANDROID_USE_LIBLOG_LOGCAT_INTERFACE=1
LOCAL_C_INCLUDES := include ../include ../base/include

include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE    := logger
LOCAL_STATIC_LIBRARIES := loggercat
LOCAL_CPPFLAGS  := -std=c++1y -D__ANDROID_USE_LIBLOG_LOGCAT_INTERFACE=1
LOCAL_SRC_FILES := ../logcat_main.cpp
LOCAL_C_INCLUDES := include ../include ../base/include ../liblog/include

include $(BUILD_EXECUTABLE)
