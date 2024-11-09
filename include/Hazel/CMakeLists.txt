# 递归查找所有 .cpp 文件
file(GLOB_RECURSE hazel ./ *.cpp)


get_filename_component(PARENT_DIR ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)
message("Parent directory: ${PARENT_DIR}")


# 添加头文件目录
include_directories(${PARENT_DIR}/spdlog/include)

# 添加静态库 Hazel
add_library(Hazel ${hazel} src/Log.cpp)  # 添加 Log.cpp


message(${CMAKE_CURRENT_LIST_DIR})
# 设置静态库输出目录
# message( ${CMAKE_CURRENT_SOURCE_DIR})
# set_target_properties(Hazel PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")
# O:\OpenGL\0NGameEngine\include\spdlog\include\spdlog
