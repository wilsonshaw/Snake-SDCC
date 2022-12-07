get_filename_component(_ownDir ${CMAKE_CURRENT_LIST_DIR} PATH)
set(CMAKE_MODULE_PATH ${_ownDir} ${CMAKE_MODULE_PATH})

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER /usr/bin/sdcc)
set(CMAKE_CXX_COMPILER /usr/bin/sdcpp)
set(CMAKE_SYSTEM_PROCESSOR "8051")

set(CMAKE_FIND_ROOT_PATH /usr/share/sdcc)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
