cmake_minimum_required(VERSION 3.18)

set(CMAKE_TOOLCHAIN_FILE TC_8051.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_GENERATOR Ninja)

project(Snake C)

add_subdirectory(src)

add_custom_target(
	Hex
	ALL
	COMMAND packihx src/${PROJECT_NAME}.ihx > ${PROJECT_NAME}.hex
	DEPENDS ${PROJECT_NAME}
)

add_custom_target(
	dl
	COMMAND python3 -m stcgal -P stc89 -b 115200 ./${PROJECT_NAME}.hex
	DEPENDS Hex
)
