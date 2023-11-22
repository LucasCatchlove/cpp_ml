cmake_minimum_required(VERSION 3.5.0)
project(cpp_ml VERSION 0.1.0 LANGUAGES C CXX)
set (CMAKE_CXX_STANDARD 11)
include(CTest)
enable_testing()

add_executable(cpp_ml cpp_ml.cpp)

target_compile_options(cpp_ml PRIVATE -O3 -Rpass=loop-vectorize -Rpass-analysis=loop-vectorize -ffast-math)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)