cmake_minimum_required(VERSION 3.15...3.31)

set(
  HEADER_LIST 
  "${ALSAMidiHelper_SOURCE_DIR}/include/app_public/application.hpp"
  "${ALSAMidiHelper_SOURCE_DIR}/include/app_public/main.hpp"
)

add_library(application application.cpp ${HEADER_LIST})

target_include_directories(application PUBLIC ../include)

target_compile_features(application PUBLIC cxx_std_11)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST}
)
