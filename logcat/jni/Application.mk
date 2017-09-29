DEBUG := -gdwarf-4

APP_ABI := arm64-v8a x86_64 mips64 armeabi-v7a x86 mips
APP_PLATFORM := android-24
#APP_OPTIM := debug
APP_STL := gnustl_static
APP_CFLAGS := $(DEBUG)
APP_CPPFLAGS := $(DEBUG)
