LOCAL_PATH := $(call my-dir)/../cpp

include $(CLEAR_VARS)
LOCAL_MODULE := arch
LOCAL_SRC_FILES += arch.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := basename
LOCAL_SRC_FILES += basename.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := clear
LOCAL_SRC_FILES += clear.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := dirname
LOCAL_SRC_FILES += dirname.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := false
LOCAL_SRC_FILES += false.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := hostname
LOCAL_SRC_FILES += hostname.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := link
LOCAL_SRC_FILES += link.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := logname
LOCAL_SRC_FILES += logname.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := pwd
LOCAL_SRC_FILES += pwd.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := realpath
LOCAL_SRC_FILES += realpath.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := reset
LOCAL_SRC_FILES += reset.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := rmdir
LOCAL_SRC_FILES += rmdir.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := sleep
LOCAL_SRC_FILES += sleep.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := symlink
LOCAL_SRC_FILES += symlink.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := sync
LOCAL_SRC_FILES += sync.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := test
LOCAL_SRC_FILES += test.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := true
LOCAL_SRC_FILES += true.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := uname
LOCAL_SRC_FILES += uname.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := unlink
LOCAL_SRC_FILES += unlink.c
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE := whoami
LOCAL_SRC_FILES += whoami.c
include $(BUILD_EXECUTABLE)
