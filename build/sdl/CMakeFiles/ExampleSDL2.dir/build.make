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
include sdl/CMakeFiles/ExampleSDL2.dir/depend.make

# Include the progress variables for this target.
include sdl/CMakeFiles/ExampleSDL2.dir/progress.make

# Include the compile flags for this target's objects.
include sdl/CMakeFiles/ExampleSDL2.dir/flags.make

sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.o: sdl/CMakeFiles/ExampleSDL2.dir/flags.make
sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.o: ../sdl/sdl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Documents/L2_2/Developement_techniques/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.o"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ExampleSDL2.dir/sdl.c.o   -c /root/Documents/L2_2/Developement_techniques/game_of_life/sdl/sdl.c

sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ExampleSDL2.dir/sdl.c.i"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/Documents/L2_2/Developement_techniques/game_of_life/sdl/sdl.c > CMakeFiles/ExampleSDL2.dir/sdl.c.i

sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ExampleSDL2.dir/sdl.c.s"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/Documents/L2_2/Developement_techniques/game_of_life/sdl/sdl.c -o CMakeFiles/ExampleSDL2.dir/sdl.c.s

# Object files for target ExampleSDL2
ExampleSDL2_OBJECTS = \
"CMakeFiles/ExampleSDL2.dir/sdl.c.o"

# External object files for target ExampleSDL2
ExampleSDL2_EXTERNAL_OBJECTS =

sdl/ExampleSDL2: sdl/CMakeFiles/ExampleSDL2.dir/sdl.c.o
sdl/ExampleSDL2: sdl/CMakeFiles/ExampleSDL2.dir/build.make
sdl/ExampleSDL2: /usr/local/lib/libSDL2.so
sdl/ExampleSDL2: /usr/local/lib/libSDL2main.a
sdl/ExampleSDL2: sdl/CMakeFiles/ExampleSDL2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Documents/L2_2/Developement_techniques/game_of_life/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ExampleSDL2"
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExampleSDL2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sdl/CMakeFiles/ExampleSDL2.dir/build: sdl/ExampleSDL2

.PHONY : sdl/CMakeFiles/ExampleSDL2.dir/build

sdl/CMakeFiles/ExampleSDL2.dir/clean:
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl && $(CMAKE_COMMAND) -P CMakeFiles/ExampleSDL2.dir/cmake_clean.cmake
.PHONY : sdl/CMakeFiles/ExampleSDL2.dir/clean

sdl/CMakeFiles/ExampleSDL2.dir/depend:
	cd /root/Documents/L2_2/Developement_techniques/game_of_life/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Documents/L2_2/Developement_techniques/game_of_life /root/Documents/L2_2/Developement_techniques/game_of_life/sdl /root/Documents/L2_2/Developement_techniques/game_of_life/build /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl /root/Documents/L2_2/Developement_techniques/game_of_life/build/sdl/CMakeFiles/ExampleSDL2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sdl/CMakeFiles/ExampleSDL2.dir/depend

