# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/root/Desktop/Dante 2/8.7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/root/Desktop/Dante 2/8.7/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/8_7.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/8_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8_7.dir/flags.make

CMakeFiles/8_7.dir/main.c.o: CMakeFiles/8_7.dir/flags.make
CMakeFiles/8_7.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/root/Desktop/Dante 2/8.7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/8_7.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/8_7.dir/main.c.o -c "/root/Desktop/Dante 2/8.7/main.c"

CMakeFiles/8_7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/8_7.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/root/Desktop/Dante 2/8.7/main.c" > CMakeFiles/8_7.dir/main.c.i

CMakeFiles/8_7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/8_7.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/root/Desktop/Dante 2/8.7/main.c" -o CMakeFiles/8_7.dir/main.c.s

# Object files for target 8_7
8_7_OBJECTS = \
"CMakeFiles/8_7.dir/main.c.o"

# External object files for target 8_7
8_7_EXTERNAL_OBJECTS =

8_7: CMakeFiles/8_7.dir/main.c.o
8_7: CMakeFiles/8_7.dir/build.make
8_7: CMakeFiles/8_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/root/Desktop/Dante 2/8.7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 8_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8_7.dir/build: 8_7
.PHONY : CMakeFiles/8_7.dir/build

CMakeFiles/8_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8_7.dir/clean

CMakeFiles/8_7.dir/depend:
	cd "/root/Desktop/Dante 2/8.7/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/root/Desktop/Dante 2/8.7" "/root/Desktop/Dante 2/8.7" "/root/Desktop/Dante 2/8.7/cmake-build-debug" "/root/Desktop/Dante 2/8.7/cmake-build-debug" "/root/Desktop/Dante 2/8.7/cmake-build-debug/CMakeFiles/8_7.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/8_7.dir/depend
