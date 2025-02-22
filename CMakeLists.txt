cmake_minimum_required(VERSION 3.15...3.31)

project(
  ALSAMidiHelper
  VERSION 0.1
  DESCRIPTION "Helper for MIDI controller with ALSA!"
  LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(app)
