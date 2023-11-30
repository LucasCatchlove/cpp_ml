cmake_minimum_required(VERSION 3.5.0)
project(cpp_ml VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

# Set the source and include directories
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Gather all source files in the "src" directory
file(GLOB SOURCE_FILES ${SOURCE_DIR}/*.cpp)

# Add the include directory to include headers
include_directories(${INCLUDE_DIR})

# Create the executable target
add_executable(driver ${SOURCE_FILES})

# Set compiler options
target_compile_options(driver PRIVATE -O3 -Rpass=loop-vectorize -Rpass-analysis=loop-vectorize -ffast-math)

# CPack configurations
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
