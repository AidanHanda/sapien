# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${Sapien_SOURCE_DIR}/include/sapien/*.hpp")
# set(HEADER_LIST "${Sapien_SOURCE_DIR}/include/sapien/lib.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(sapien_library lib.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(sapien_library PUBLIC ../include)

# All users of this library will need at least C++11
target_compile_features(sapien_library PUBLIC cxx_std_20)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
