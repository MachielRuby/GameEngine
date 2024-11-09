# 递归查找所有 .cpp 文件
file(GLOB_RECURSE hazel ./ *.cpp)

# 添加静态库 Hazel
add_library(Hazel SHARED ${hazel})

message(${CMAKE_CURRENT_LIST_DIR})
# 设置静态库输出目录
# message( ${CMAKE_CURRENT_SOURCE_DIR})
# set_target_properties(Hazel PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")
