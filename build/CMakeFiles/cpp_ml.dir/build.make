# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lucas/Documents/code/cpp_ml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lucas/Documents/code/cpp_ml/build

# Include any dependencies generated for this target.
include CMakeFiles/cpp_ml.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cpp_ml.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_ml.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_ml.dir/flags.make

CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o: CMakeFiles/cpp_ml.dir/flags.make
CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o: /Users/lucas/Documents/code/cpp_ml/cpp_ml.cpp
CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o: CMakeFiles/cpp_ml.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lucas/Documents/code/cpp_ml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o -MF CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o.d -o CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o -c /Users/lucas/Documents/code/cpp_ml/cpp_ml.cpp

CMakeFiles/cpp_ml.dir/cpp_ml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cpp_ml.dir/cpp_ml.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lucas/Documents/code/cpp_ml/cpp_ml.cpp > CMakeFiles/cpp_ml.dir/cpp_ml.cpp.i

CMakeFiles/cpp_ml.dir/cpp_ml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cpp_ml.dir/cpp_ml.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lucas/Documents/code/cpp_ml/cpp_ml.cpp -o CMakeFiles/cpp_ml.dir/cpp_ml.cpp.s

# Object files for target cpp_ml
cpp_ml_OBJECTS = \
"CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o"

# External object files for target cpp_ml
cpp_ml_EXTERNAL_OBJECTS =

libcpp_ml.a: CMakeFiles/cpp_ml.dir/cpp_ml.cpp.o
libcpp_ml.a: CMakeFiles/cpp_ml.dir/build.make
libcpp_ml.a: CMakeFiles/cpp_ml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lucas/Documents/code/cpp_ml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcpp_ml.a"
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_ml.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_ml.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_ml.dir/build: libcpp_ml.a
.PHONY : CMakeFiles/cpp_ml.dir/build

CMakeFiles/cpp_ml.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_ml.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_ml.dir/clean

CMakeFiles/cpp_ml.dir/depend:
	cd /Users/lucas/Documents/code/cpp_ml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lucas/Documents/code/cpp_ml /Users/lucas/Documents/code/cpp_ml /Users/lucas/Documents/code/cpp_ml/build /Users/lucas/Documents/code/cpp_ml/build /Users/lucas/Documents/code/cpp_ml/build/CMakeFiles/cpp_ml.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cpp_ml.dir/depend

