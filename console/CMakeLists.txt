cmake_minimum_required(VERSION 3.16.3)
cmake_policy(SET CMP0076 NEW)

project(console)

SET(VALUE CACHE STRING "console_value")

add_library(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME} PUBLIC board_drawer.c board_drawer.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} INTERFACE m)

target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=$VALUE)


install(TARGETS ${PROJECT_NAME})
install(FILES game.h DESTINATION include)