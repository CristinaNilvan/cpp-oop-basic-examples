# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\crist\OneDrive\Desktop\Github\credit-card

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/credit_card.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/credit_card.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/credit_card.dir/flags.make

CMakeFiles/credit_card.dir/main.cpp.obj: CMakeFiles/credit_card.dir/flags.make
CMakeFiles/credit_card.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/credit_card.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\credit_card.dir\main.cpp.obj -c C:\Users\crist\OneDrive\Desktop\Github\credit-card\main.cpp

CMakeFiles/credit_card.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/credit_card.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\crist\OneDrive\Desktop\Github\credit-card\main.cpp > CMakeFiles\credit_card.dir\main.cpp.i

CMakeFiles/credit_card.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/credit_card.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\crist\OneDrive\Desktop\Github\credit-card\main.cpp -o CMakeFiles\credit_card.dir\main.cpp.s

# Object files for target credit_card
credit_card_OBJECTS = \
"CMakeFiles/credit_card.dir/main.cpp.obj"

# External object files for target credit_card
credit_card_EXTERNAL_OBJECTS =

credit_card.exe: CMakeFiles/credit_card.dir/main.cpp.obj
credit_card.exe: CMakeFiles/credit_card.dir/build.make
credit_card.exe: CMakeFiles/credit_card.dir/linklibs.rsp
credit_card.exe: CMakeFiles/credit_card.dir/objects1.rsp
credit_card.exe: CMakeFiles/credit_card.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable credit_card.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\credit_card.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/credit_card.dir/build: credit_card.exe

.PHONY : CMakeFiles/credit_card.dir/build

CMakeFiles/credit_card.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\credit_card.dir\cmake_clean.cmake
.PHONY : CMakeFiles/credit_card.dir/clean

CMakeFiles/credit_card.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\crist\OneDrive\Desktop\Github\credit-card C:\Users\crist\OneDrive\Desktop\Github\credit-card C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug C:\Users\crist\OneDrive\Desktop\Github\credit-card\cmake-build-debug\CMakeFiles\credit_card.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/credit_card.dir/depend
