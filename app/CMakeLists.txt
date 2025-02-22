cmake_minimum_required(VERSION 3.15...3.31)
add_executable(ALSAMidiHelper main.cpp)

target_compile_features(ALSAMidiHelper PRIVATE cxx_std_17)

target_link_libraries(ALSAMidiHelper PRIVATE application)
