# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.30.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.30.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marynalacava/hashburst_form_templates/HashburstMiner

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marynalacava/hashburst_form_templates/HashburstMiner/build

# Include any dependencies generated for this target.
include src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/compiler_depend.make

# Include the progress variables for this target.
include src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/progress.make

# Include the compile flags for this target's objects.
include src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/flags.make

src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o: src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/flags.make
src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o: /Users/marynalacava/hashburst_form_templates/HashburstMiner/src/3rdparty/argon2/arch/x86_64/lib/argon2-avx512f.c
src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o: src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/marynalacava/hashburst_form_templates/HashburstMiner/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o"
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o -MF CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o.d -o CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o -c /Users/marynalacava/hashburst_form_templates/HashburstMiner/src/3rdparty/argon2/arch/x86_64/lib/argon2-avx512f.c

src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.i"
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/marynalacava/hashburst_form_templates/HashburstMiner/src/3rdparty/argon2/arch/x86_64/lib/argon2-avx512f.c > CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.i

src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.s"
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/marynalacava/hashburst_form_templates/HashburstMiner/src/3rdparty/argon2/arch/x86_64/lib/argon2-avx512f.c -o CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.s

# Object files for target argon2-avx512f
argon2__avx512f_OBJECTS = \
"CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o"

# External object files for target argon2-avx512f
argon2__avx512f_EXTERNAL_OBJECTS =

src/3rdparty/argon2/libargon2-avx512f.a: src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/arch/x86_64/lib/argon2-avx512f.c.o
src/3rdparty/argon2/libargon2-avx512f.a: src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/build.make
src/3rdparty/argon2/libargon2-avx512f.a: src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/marynalacava/hashburst_form_templates/HashburstMiner/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libargon2-avx512f.a"
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && $(CMAKE_COMMAND) -P CMakeFiles/argon2-avx512f.dir/cmake_clean_target.cmake
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/argon2-avx512f.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/build: src/3rdparty/argon2/libargon2-avx512f.a
.PHONY : src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/build

src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/clean:
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 && $(CMAKE_COMMAND) -P CMakeFiles/argon2-avx512f.dir/cmake_clean.cmake
.PHONY : src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/clean

src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/depend:
	cd /Users/marynalacava/hashburst_form_templates/HashburstMiner/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marynalacava/hashburst_form_templates/HashburstMiner /Users/marynalacava/hashburst_form_templates/HashburstMiner/src/3rdparty/argon2 /Users/marynalacava/hashburst_form_templates/HashburstMiner/build /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2 /Users/marynalacava/hashburst_form_templates/HashburstMiner/build/src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/3rdparty/argon2/CMakeFiles/argon2-avx512f.dir/depend

