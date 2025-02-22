cmake_minimum_required(VERSION 3.15...3.31)

project(
  ALSAMidiHelper
  VERSION 0.1
  DESCRIPTION "Helper for MIDI controller with ALSA!"
  LANGUAGES CXX)

# if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
# endif()

add_subdirectory(src)
add_subdirectory(app)
