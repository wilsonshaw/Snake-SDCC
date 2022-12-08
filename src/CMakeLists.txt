include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(Delay
STATIC
	Delay.h
	Delay.c
)
add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME}
PUBLIC
	Delay
)
