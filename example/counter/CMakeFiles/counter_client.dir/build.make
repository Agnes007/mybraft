# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agnes/Documents/mybraft/example/counter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agnes/Documents/mybraft/example/counter

# Include any dependencies generated for this target.
include CMakeFiles/counter_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/counter_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/counter_client.dir/flags.make

counter.pb.cc: counter.proto
counter.pb.cc: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/agnes/Documents/mybraft/example/counter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on counter.proto"
	/usr/bin/protoc --cpp_out=/home/agnes/Documents/mybraft/example/counter -I /home/agnes/Documents/mybraft/example/counter /home/agnes/Documents/mybraft/example/counter/counter.proto

counter.pb.h: counter.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate counter.pb.h

CMakeFiles/counter_client.dir/client.cpp.o: CMakeFiles/counter_client.dir/flags.make
CMakeFiles/counter_client.dir/client.cpp.o: client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agnes/Documents/mybraft/example/counter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/counter_client.dir/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/counter_client.dir/client.cpp.o -c /home/agnes/Documents/mybraft/example/counter/client.cpp

CMakeFiles/counter_client.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/counter_client.dir/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agnes/Documents/mybraft/example/counter/client.cpp > CMakeFiles/counter_client.dir/client.cpp.i

CMakeFiles/counter_client.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/counter_client.dir/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agnes/Documents/mybraft/example/counter/client.cpp -o CMakeFiles/counter_client.dir/client.cpp.s

CMakeFiles/counter_client.dir/client.cpp.o.requires:

.PHONY : CMakeFiles/counter_client.dir/client.cpp.o.requires

CMakeFiles/counter_client.dir/client.cpp.o.provides: CMakeFiles/counter_client.dir/client.cpp.o.requires
	$(MAKE) -f CMakeFiles/counter_client.dir/build.make CMakeFiles/counter_client.dir/client.cpp.o.provides.build
.PHONY : CMakeFiles/counter_client.dir/client.cpp.o.provides

CMakeFiles/counter_client.dir/client.cpp.o.provides.build: CMakeFiles/counter_client.dir/client.cpp.o


CMakeFiles/counter_client.dir/counter.pb.cc.o: CMakeFiles/counter_client.dir/flags.make
CMakeFiles/counter_client.dir/counter.pb.cc.o: counter.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agnes/Documents/mybraft/example/counter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/counter_client.dir/counter.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/counter_client.dir/counter.pb.cc.o -c /home/agnes/Documents/mybraft/example/counter/counter.pb.cc

CMakeFiles/counter_client.dir/counter.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/counter_client.dir/counter.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agnes/Documents/mybraft/example/counter/counter.pb.cc > CMakeFiles/counter_client.dir/counter.pb.cc.i

CMakeFiles/counter_client.dir/counter.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/counter_client.dir/counter.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agnes/Documents/mybraft/example/counter/counter.pb.cc -o CMakeFiles/counter_client.dir/counter.pb.cc.s

CMakeFiles/counter_client.dir/counter.pb.cc.o.requires:

.PHONY : CMakeFiles/counter_client.dir/counter.pb.cc.o.requires

CMakeFiles/counter_client.dir/counter.pb.cc.o.provides: CMakeFiles/counter_client.dir/counter.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/counter_client.dir/build.make CMakeFiles/counter_client.dir/counter.pb.cc.o.provides.build
.PHONY : CMakeFiles/counter_client.dir/counter.pb.cc.o.provides

CMakeFiles/counter_client.dir/counter.pb.cc.o.provides.build: CMakeFiles/counter_client.dir/counter.pb.cc.o


# Object files for target counter_client
counter_client_OBJECTS = \
"CMakeFiles/counter_client.dir/client.cpp.o" \
"CMakeFiles/counter_client.dir/counter.pb.cc.o"

# External object files for target counter_client
counter_client_EXTERNAL_OBJECTS =

counter_client: CMakeFiles/counter_client.dir/client.cpp.o
counter_client: CMakeFiles/counter_client.dir/counter.pb.cc.o
counter_client: CMakeFiles/counter_client.dir/build.make
counter_client: /usr/lib/x86_64-linux-gnu/libgflags.so
counter_client: /usr/lib/x86_64-linux-gnu/libprotobuf.so
counter_client: /usr/local/lib/libtcmalloc_and_profiler.so
counter_client: /home/agnes/Documents/aaaa/myleveldb/lib/libleveldb.a
counter_client: /home/agnes/Documents/aaaa/myleveldb/lib/libbraft.a
counter_client: /home/agnes/Documents/aaaa/myleveldb/lib/libbrpc.a
counter_client: CMakeFiles/counter_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agnes/Documents/mybraft/example/counter/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable counter_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/counter_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/counter_client.dir/build: counter_client

.PHONY : CMakeFiles/counter_client.dir/build

CMakeFiles/counter_client.dir/requires: CMakeFiles/counter_client.dir/client.cpp.o.requires
CMakeFiles/counter_client.dir/requires: CMakeFiles/counter_client.dir/counter.pb.cc.o.requires

.PHONY : CMakeFiles/counter_client.dir/requires

CMakeFiles/counter_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/counter_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/counter_client.dir/clean

CMakeFiles/counter_client.dir/depend: counter.pb.cc
CMakeFiles/counter_client.dir/depend: counter.pb.h
	cd /home/agnes/Documents/mybraft/example/counter && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agnes/Documents/mybraft/example/counter /home/agnes/Documents/mybraft/example/counter /home/agnes/Documents/mybraft/example/counter /home/agnes/Documents/mybraft/example/counter /home/agnes/Documents/mybraft/example/counter/CMakeFiles/counter_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/counter_client.dir/depend

