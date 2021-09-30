cmake_minimum_required(VERSION 3.20)
project(JSON)

set(CMAKE_CXX_STANDARD 17)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_executable(JSON main.cpp)
add_executable(task_1 task_1.cpp)
add_executable(task_2 task_2.cpp)

add_subdirectory(nlohmann_json)

target_link_libraries(JSON PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(task_1 PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(task_2 PRIVATE nlohmann_json::nlohmann_json)