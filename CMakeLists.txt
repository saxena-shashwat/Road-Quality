cmake_minimum_required(VERSION 3.15)

# Define project name and language
project(RoadQuality VERSION 0.1.0 LANGUAGES C)

# Specify C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Executable target
add_executable(RoadQuality
    src/main.c
    src/basic.c
)

# Include directories
target_include_directories(RoadQuality
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link math library if required on the platform
find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
    target_link_libraries(RoadQuality PRIVATE ${MATH_LIBRARY})
endif()

