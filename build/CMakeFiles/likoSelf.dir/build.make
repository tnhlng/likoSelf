# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /data/zhoufan/cmake-3.28.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /data/zhoufan/cmake-3.28.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tanhailiang/likoSelf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tanhailiang/likoSelf/build

# Include any dependencies generated for this target.
include CMakeFiles/likoSelf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/likoSelf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/likoSelf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/likoSelf.dir/flags.make

CMakeFiles/likoSelf.dir/main.cpp.o: CMakeFiles/likoSelf.dir/flags.make
CMakeFiles/likoSelf.dir/main.cpp.o: /home/tanhailiang/likoSelf/main.cpp
CMakeFiles/likoSelf.dir/main.cpp.o: CMakeFiles/likoSelf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tanhailiang/likoSelf/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/likoSelf.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/likoSelf.dir/main.cpp.o -MF CMakeFiles/likoSelf.dir/main.cpp.o.d -o CMakeFiles/likoSelf.dir/main.cpp.o -c /home/tanhailiang/likoSelf/main.cpp

CMakeFiles/likoSelf.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/likoSelf.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tanhailiang/likoSelf/main.cpp > CMakeFiles/likoSelf.dir/main.cpp.i

CMakeFiles/likoSelf.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/likoSelf.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tanhailiang/likoSelf/main.cpp -o CMakeFiles/likoSelf.dir/main.cpp.s

CMakeFiles/likoSelf.dir/util.cpp.o: CMakeFiles/likoSelf.dir/flags.make
CMakeFiles/likoSelf.dir/util.cpp.o: /home/tanhailiang/likoSelf/util.cpp
CMakeFiles/likoSelf.dir/util.cpp.o: CMakeFiles/likoSelf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tanhailiang/likoSelf/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/likoSelf.dir/util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/likoSelf.dir/util.cpp.o -MF CMakeFiles/likoSelf.dir/util.cpp.o.d -o CMakeFiles/likoSelf.dir/util.cpp.o -c /home/tanhailiang/likoSelf/util.cpp

CMakeFiles/likoSelf.dir/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/likoSelf.dir/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tanhailiang/likoSelf/util.cpp > CMakeFiles/likoSelf.dir/util.cpp.i

CMakeFiles/likoSelf.dir/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/likoSelf.dir/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tanhailiang/likoSelf/util.cpp -o CMakeFiles/likoSelf.dir/util.cpp.s

# Object files for target likoSelf
likoSelf_OBJECTS = \
"CMakeFiles/likoSelf.dir/main.cpp.o" \
"CMakeFiles/likoSelf.dir/util.cpp.o"

# External object files for target likoSelf
likoSelf_EXTERNAL_OBJECTS =

likoSelf: CMakeFiles/likoSelf.dir/main.cpp.o
likoSelf: CMakeFiles/likoSelf.dir/util.cpp.o
likoSelf: CMakeFiles/likoSelf.dir/build.make
likoSelf: CMakeFiles/likoSelf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tanhailiang/likoSelf/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable likoSelf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/likoSelf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/likoSelf.dir/build: likoSelf
.PHONY : CMakeFiles/likoSelf.dir/build

CMakeFiles/likoSelf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/likoSelf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/likoSelf.dir/clean

CMakeFiles/likoSelf.dir/depend:
	cd /home/tanhailiang/likoSelf/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tanhailiang/likoSelf /home/tanhailiang/likoSelf /home/tanhailiang/likoSelf/build /home/tanhailiang/likoSelf/build /home/tanhailiang/likoSelf/build/CMakeFiles/likoSelf.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/likoSelf.dir/depend

