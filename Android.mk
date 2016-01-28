LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

ROOT_PATH := $(LOCAL_PATH)/libiconv-1.14/

LOCAL_MODULE := iconv

LOCAL_CFLAGS := \
  -Wno-multichar \
  -DANDROID \
  -DLIBDIR="c" \
  -DBUILDING_LIBICONV \
  -DIN_LIBRARY

LOCAL_SRC_FILES := \
  $(ROOT_PATH)/libcharset/lib/localcharset.c \
  $(ROOT_PATH)/lib/iconv.c \
  $(ROOT_PATH)/lib/relocatable.c \
  $(ROOT_PATH)/src/iconv_no_i18n.c \
  $(ROOT_PATH)/srclib/safe-read.c \
  $(ROOT_PATH)/srclib/xmalloc.c \
  $(ROOT_PATH)/srclib/uniwidth/width.c

LOCAL_C_INCLUDES += \
  $(ROOT_PATH)/include \
  $(ROOT_PATH)/libcharset \
  $(ROOT_PATH)/lib \
  $(ROOT_PATH)/libcharset/include \
  $(ROOT_PATH)/srclib

include $(BUILD_EXECUTABLE)


