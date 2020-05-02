cmake_minimum_required(VERSION 3.16.3)
cmake_policy(SET CMP0076 NEW)

project(game_of_life)

add_subdirectory(console)

add_subdirectory(game)

# add_subdirectory(sdl)

set (SRC main.c)

add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC console game)

install(TARGETS ${PROJECT_NAME})