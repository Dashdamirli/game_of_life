# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Documents/L2_2/Developement_techniques/game_of_life

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Documents/L2_2/Developement_techniques/game_of_life/build

# Include any dependencies generated for this target.
include game/CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include game/CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include game/CMakeFiles/game.dir/flags.make

game/CMakeFiles/game.dir/game.c.o: game/CMakeFiles/game.dir/flags.make
game/CMakeFiles/game.dir/game.c.o: ../game/game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Documents/L2_2/Developement_techniques/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object game/CMakeFiles/game.dir/game.c.o"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game.dir/game.c.o   -c /root/Documents/L2_2/Developement_techniques/game_of_life/game/game.c

game/CMakeFiles/game.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game.dir/game.c.i"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/Documents/L2_2/Developement_techniques/game_of_life/game/game.c > CMakeFiles/game.dir/game.c.i

game/CMakeFiles/game.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game.dir/game.c.s"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/Documents/L2_2/Developement_techniques/game_of_life/game/game.c -o CMakeFiles/game.dir/game.c.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/game.c.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game/libgame.a: game/CMakeFiles/game.dir/game.c.o
game/libgame.a: game/CMakeFiles/game.dir/build.make
game/libgame.a: game/CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Documents/L2_2/Developement_techniques/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libgame.a"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean_target.cmake
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
game/CMakeFiles/game.dir/build: game/libgame.a

.PHONY : game/CMakeFiles/game.dir/build

game/CMakeFiles/game.dir/clean:
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/game && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : game/CMakeFiles/game.dir/clean

game/CMakeFiles/game.dir/depend:
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Documents/L2_2/Developement_techniques/game_of_life /root/Documents/L2_2/Developement_techniques/game_of_life/game /root/Documents/L2_2/Developement_techniques/game_of_life/build /root/Documents/L2_2/Developement_techniques/game_of_life/build/game /root/Documents/L2_2/Developement_techniques/game_of_life/build/game/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : game/CMakeFiles/game.dir/depend

