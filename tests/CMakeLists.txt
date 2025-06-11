add_executable(runTests test_stringProcessor.cpp test_sortAlgorithms.cpp)
target_link_libraries(runTests core_lib GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(runTests WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
