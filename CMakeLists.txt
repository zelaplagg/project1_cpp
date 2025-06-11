cmake_minimum_required(VERSION 3.14)
project(lab4_ci_macos1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(core_lib STATIC
    src/stringProcessor.cpp
    src/sortAlgorithms.cpp
)
target_include_directories(core_lib PUBLIC ${CMAKE_SOURCE_DIR}/src)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(runTests
    tests/test_stringProcessor.cpp
    tests/test_sortAlgorithms.cpp
)
target_link_libraries(runTests PRIVATE core_lib GTest::gtest_main)

add_test(NAME runTests COMMAND runTests)
