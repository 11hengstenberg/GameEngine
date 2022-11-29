cmake_minimum_required(VERSION 3.24.2)

project(proyecto VERSION 1.0)

add_executable(${PROJECT_NAME} src/main.cpp)


target_link_libraries(
	${PROJECT_NAME}	
	SDL2main
	SDL2
)

