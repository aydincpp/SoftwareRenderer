cmake_minimum_required(VERSION 3.15)
project(tests LANGUAGES C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# compiler flags
add_compile_options(-Wall -Wextra -O2)

# source files
set(TEST_SOURCES
    main.c
    matrix_test.c
    vector_test.c
)

# main executable
add_executable(tests ${TEST_SOURCES})

# link libraries
target_link_libraries(tests PRIVATE sga m)

# include directories
target_include_directories(tests PRIVATE ${PROJECT_SOURCE_DIR}/../src)

# output directory for test binary
set_target_properties(tests PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)
