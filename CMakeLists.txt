cmake_minimum_required(VERSION 3.16.3)
project(game_of_life)

include_directories(include)

set(SOURCES game/game.c console/board_drawer.c ./main.c)

add_executable(testGame ${SOURCES})