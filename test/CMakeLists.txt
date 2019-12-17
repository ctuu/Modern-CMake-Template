include(FetchContent)
include(GoogleTest)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.10.0
)

FetchContent_MakeAvailable(googletest)

add_executable(UnitTest test.cpp)

target_link_libraries(UnitTest
PRIVATE
    template
    gtest_main
)

gtest_discover_tests(UnitTest)