cmake_minimum_required(VERSION 3.15)
project(main LANGUAGES C)

# set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# compiler flags
add_compile_options(-Wall -Wextra -O2)

# add library target
add_library(sga
    src/algorithm/bresenham.c
    src/graphics/color.c
    src/graphics/draw.c
    src/graphics/pixel.c
    src/math/matrix.c
    src/math/vector.c
    src/platform/framebuffer.c
    src/platform/input.c
)

# include directories for the library target
target_include_directories(sga PUBLIC ${PROJECT_SOURCE_DIR}/src)

# main executable
add_executable(${PROJECT_NAME} main.c)

# link the executable with the cpipe library and math library
target_link_libraries(${PROJECT_NAME} PRIVATE sga m)

# output directories for executable and library
set_target_properties(${PROJECT_NAME} PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
  OBJECT_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/obj
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/lib
  LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/lib
  OBJECT_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/obj
)

add_subdirectory(test)
