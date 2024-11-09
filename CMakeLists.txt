cmake_minimum_required(VERSION 3.20)

project("GameEngine")

set(CMAKE_CXX_STANDARD 17)

add_definitions(-DHZ_PLATFORM_WINDOWS)
add_definitions(-DHZ_BUILD_DLL)
message("===================================")
# 设置目录变量
set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
message("ROOT_PATH = ${ROOT_PATH}")

# 设置输出可执行文件目录
# 定义生成输出的根目录
set(CMAKE_BINARY_DIR "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(EXECUTABLE_OUTPUT_PATH ${ROOT_PATH}/bin)
set(EXECUTABLE_OUTPUT_PATH ${ROOT_PATH}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})

# 设置 Debug 和 Release 类型的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${EXECUTABLE_OUTPUT_PATH}/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${EXECUTABLE_OUTPUT_PATH}/Release)



# 添加子目录
set(INCLUDE_PATH ${ROOT_PATH}/include)
add_subdirectory(${INCLUDE_PATH}/Hazel)

message("EXECUTABLE_OUTPUT_PATH = ${EXECUTABLE_OUTPUT_PATH}")
message("===================================")


# 添加头文件目录
include_directories(${ROOT_PATH}/include)


# 添加可执行文件
add_executable(${PROJECT_NAME} ./src/Application.cpp)

target_link_libraries(${PROJECT_NAME} Hazel)

