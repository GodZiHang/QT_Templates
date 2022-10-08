# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/runPanel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/runPanel_autogen.dir/ParseCache.txt"
  "runPanel_autogen"
  )
endif()
