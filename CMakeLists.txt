cmake_minimum_required(VERSION 2.8.11)
project(two_libs)

set(TWO_LIBS_MAJOR "0")
set(TWO_LIBS_MINOR "1")
set(TWO_LIBS_PATCH "0")

# CMake RPATH "always full" configuration, see:
# https://cmake.org/Wiki/CMake_RPATH_handling#Always_full_RPATH
# use, i.e. don't skip the full RPATH for the build tree
set(CMAKE_SKIP_BUILD_RPATH False)
# when building, don't use the install RPATH already
# (but later on when installing)
set(CMAKE_BUILD_WITH_INSTALL_RPATH False)
# the RPATH to be used when installing, but only if it's not a system directory
list(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
if("${isSystemDir}" STREQUAL "-1")
  set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
endif("${isSystemDir}" STREQUAL "-1")
# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH True)

add_subdirectory(incr_num)

add_subdirectory(add_nums)

add_subdirectory(mult_nums)

configure_file(
  "${PROJECT_SOURCE_DIR}/two_libs-config.cmake.in"
  "${PROJECT_BINARY_DIR}/two_libs-config.cmake"
  @ONLY)
configure_file(
  "${PROJECT_SOURCE_DIR}/two_libs-config-version.cmake.in"
  "${PROJECT_BINARY_DIR}/two_libs-config-version.cmake"
  @ONLY)
install(FILES
  "${PROJECT_BINARY_DIR}/two_libs-config.cmake"
  "${PROJECT_BINARY_DIR}/two_libs-config-version.cmake"
  DESTINATION lib/two_libs)
