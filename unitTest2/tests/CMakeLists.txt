add_subdirectory(../googletest googletest-build)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests test_functions.cpp ../functions.cpp)
target_link_libraries(runTests gtest gtest_main)