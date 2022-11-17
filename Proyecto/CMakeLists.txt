cmake_minimum_required(VERSION 3.24.2)

project(SampleP VERSION 1.0)

add_executable(SampleE src/main.cpp)

add_subdirectory(src/Math)
add_subdirectory(deps/glfw)


target_include_directories(
	SampleE PUBLIC src/Math
	SampleE PUBLIC deps/glfw/src
)


target_link_directories(
	SampleE PRIVATE src/Math
	SampleE PRIVATE deps/glfw/src
)

target_link_libraries(
	SampleE
	math
	glfw
)
