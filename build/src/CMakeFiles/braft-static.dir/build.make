# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/agnes/Documents/mybraft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agnes/Documents/mybraft/build

# Include any dependencies generated for this target.
include src/CMakeFiles/braft-static.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/braft-static.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/braft-static.dir/flags.make

# Object files for target braft-static
braft__static_OBJECTS =

# External object files for target braft-static
braft__static_EXTERNAL_OBJECTS = \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/replicator.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/snapshot_throttle.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/file_service.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/storage.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/builtin_service_impl.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/file_system_adaptor.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/ballot_box.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/cli.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/configuration_manager.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/closure_queue.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/route_table.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/memory_log.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/raft_meta.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/log_entry.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/util.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/remote_file_copier.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/log.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/configuration.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/fsync.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/raft_service.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/protobuf_file.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/ballot.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/snapshot.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/node_manager.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/fsm_caller.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/repeated_timer_task.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/snapshot_executor.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/node.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/file_reader.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/cli_service.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/log_manager.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/braft/raft.cpp.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/local_storage.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/errno.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/local_file_meta.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/builtin_service.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/cli.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/raft.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/enum.pb.cc.o" \
"/home/agnes/Documents/mybraft/build/src/CMakeFiles/OBJ_LIB.dir/__/braft/file_service.pb.cc.o"

output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/replicator.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/snapshot_throttle.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/file_service.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/storage.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/builtin_service_impl.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/file_system_adaptor.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/ballot_box.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/cli.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/configuration_manager.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/closure_queue.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/route_table.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/memory_log.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/raft_meta.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/log_entry.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/util.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/remote_file_copier.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/log.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/configuration.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/fsync.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/raft_service.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/protobuf_file.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/ballot.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/snapshot.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/node_manager.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/fsm_caller.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/repeated_timer_task.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/snapshot_executor.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/node.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/file_reader.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/cli_service.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/log_manager.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/braft/raft.cpp.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/local_storage.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/errno.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/local_file_meta.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/builtin_service.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/cli.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/raft.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/enum.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/OBJ_LIB.dir/__/braft/file_service.pb.cc.o
output/lib/libbraft.a: src/CMakeFiles/braft-static.dir/build.make
output/lib/libbraft.a: src/CMakeFiles/braft-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agnes/Documents/mybraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../output/lib/libbraft.a"
	cd /home/agnes/Documents/mybraft/build/src && $(CMAKE_COMMAND) -P CMakeFiles/braft-static.dir/cmake_clean_target.cmake
	cd /home/agnes/Documents/mybraft/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/braft-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/braft-static.dir/build: output/lib/libbraft.a

.PHONY : src/CMakeFiles/braft-static.dir/build

src/CMakeFiles/braft-static.dir/requires:

.PHONY : src/CMakeFiles/braft-static.dir/requires

src/CMakeFiles/braft-static.dir/clean:
	cd /home/agnes/Documents/mybraft/build/src && $(CMAKE_COMMAND) -P CMakeFiles/braft-static.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/braft-static.dir/clean

src/CMakeFiles/braft-static.dir/depend:
	cd /home/agnes/Documents/mybraft/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agnes/Documents/mybraft /home/agnes/Documents/mybraft/src /home/agnes/Documents/mybraft/build /home/agnes/Documents/mybraft/build/src /home/agnes/Documents/mybraft/build/src/CMakeFiles/braft-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/braft-static.dir/depend

