add_library(template)

target_include_directories(template
PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_sources(template
PUBLIC
    ${PROJECT_SOURCE_DIR}/include/template/sum.hpp
PRIVATE
    sum.cpp
)