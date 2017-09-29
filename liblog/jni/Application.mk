DEBUG := -gdwarf-4

APP_ABI := all
APP_PLATFORM := android-24
#APP_OPTIM := debug
APP_CFLAGS += $(DEBUG)
APP_CPPFLAGS += -std=c++1y $(DEBUG)
APP_STL := gnustl_static
