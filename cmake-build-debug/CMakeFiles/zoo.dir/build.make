# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hadasswittow/CLionProjects/zoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hadasswittow/CLionProjects/zoo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zoo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zoo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zoo.dir/flags.make

CMakeFiles/zoo.dir/main.cpp.o: CMakeFiles/zoo.dir/flags.make
CMakeFiles/zoo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadasswittow/CLionProjects/zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zoo.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zoo.dir/main.cpp.o -c /home/hadasswittow/CLionProjects/zoo/main.cpp

CMakeFiles/zoo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zoo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadasswittow/CLionProjects/zoo/main.cpp > CMakeFiles/zoo.dir/main.cpp.i

CMakeFiles/zoo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zoo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadasswittow/CLionProjects/zoo/main.cpp -o CMakeFiles/zoo.dir/main.cpp.s

CMakeFiles/zoo.dir/Animal.cpp.o: CMakeFiles/zoo.dir/flags.make
CMakeFiles/zoo.dir/Animal.cpp.o: ../Animal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadasswittow/CLionProjects/zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/zoo.dir/Animal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zoo.dir/Animal.cpp.o -c /home/hadasswittow/CLionProjects/zoo/Animal.cpp

CMakeFiles/zoo.dir/Animal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zoo.dir/Animal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadasswittow/CLionProjects/zoo/Animal.cpp > CMakeFiles/zoo.dir/Animal.cpp.i

CMakeFiles/zoo.dir/Animal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zoo.dir/Animal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadasswittow/CLionProjects/zoo/Animal.cpp -o CMakeFiles/zoo.dir/Animal.cpp.s

CMakeFiles/zoo.dir/tests.cpp.o: CMakeFiles/zoo.dir/flags.make
CMakeFiles/zoo.dir/tests.cpp.o: ../tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadasswittow/CLionProjects/zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/zoo.dir/tests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zoo.dir/tests.cpp.o -c /home/hadasswittow/CLionProjects/zoo/tests.cpp

CMakeFiles/zoo.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zoo.dir/tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadasswittow/CLionProjects/zoo/tests.cpp > CMakeFiles/zoo.dir/tests.cpp.i

CMakeFiles/zoo.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zoo.dir/tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadasswittow/CLionProjects/zoo/tests.cpp -o CMakeFiles/zoo.dir/tests.cpp.s

# Object files for target zoo
zoo_OBJECTS = \
"CMakeFiles/zoo.dir/main.cpp.o" \
"CMakeFiles/zoo.dir/Animal.cpp.o" \
"CMakeFiles/zoo.dir/tests.cpp.o"

# External object files for target zoo
zoo_EXTERNAL_OBJECTS =

zoo: CMakeFiles/zoo.dir/main.cpp.o
zoo: CMakeFiles/zoo.dir/Animal.cpp.o
zoo: CMakeFiles/zoo.dir/tests.cpp.o
zoo: CMakeFiles/zoo.dir/build.make
zoo: CMakeFiles/zoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hadasswittow/CLionProjects/zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable zoo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zoo.dir/build: zoo

.PHONY : CMakeFiles/zoo.dir/build

CMakeFiles/zoo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zoo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zoo.dir/clean

CMakeFiles/zoo.dir/depend:
	cd /home/hadasswittow/CLionProjects/zoo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hadasswittow/CLionProjects/zoo /home/hadasswittow/CLionProjects/zoo /home/hadasswittow/CLionProjects/zoo/cmake-build-debug /home/hadasswittow/CLionProjects/zoo/cmake-build-debug /home/hadasswittow/CLionProjects/zoo/cmake-build-debug/CMakeFiles/zoo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zoo.dir/depend

