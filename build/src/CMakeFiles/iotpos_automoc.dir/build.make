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
CMAKE_SOURCE_DIR = /home/pi/Proyecto/epos/iotpos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Proyecto/epos/iotpos/build

# Utility rule file for iotpos_automoc.

# Include the progress variables for this target.
include src/CMakeFiles/iotpos_automoc.dir/progress.make

src/CMakeFiles/iotpos_automoc:
	cd /home/pi/Proyecto/epos/iotpos/build/src && /usr/bin/automoc4 /home/pi/Proyecto/epos/iotpos/build/src/iotpos_automoc.cpp /home/pi/Proyecto/epos/iotpos/src /home/pi/Proyecto/epos/iotpos/build/src /usr/lib/arm-linux-gnueabihf/qt4/bin/moc /usr/bin/cmake

iotpos_automoc: src/CMakeFiles/iotpos_automoc
iotpos_automoc: src/CMakeFiles/iotpos_automoc.dir/build.make

.PHONY : iotpos_automoc

# Rule to build all files generated by this target.
src/CMakeFiles/iotpos_automoc.dir/build: iotpos_automoc

.PHONY : src/CMakeFiles/iotpos_automoc.dir/build

src/CMakeFiles/iotpos_automoc.dir/clean:
	cd /home/pi/Proyecto/epos/iotpos/build/src && $(CMAKE_COMMAND) -P CMakeFiles/iotpos_automoc.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/iotpos_automoc.dir/clean

src/CMakeFiles/iotpos_automoc.dir/depend:
	cd /home/pi/Proyecto/epos/iotpos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Proyecto/epos/iotpos /home/pi/Proyecto/epos/iotpos/src /home/pi/Proyecto/epos/iotpos/build /home/pi/Proyecto/epos/iotpos/build/src /home/pi/Proyecto/epos/iotpos/build/src/CMakeFiles/iotpos_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/iotpos_automoc.dir/depend

