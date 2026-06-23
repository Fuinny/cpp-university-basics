add_executable(task-6-2 main.cpp)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
    ${CMAKE_CURRENT_BINARY_DIR}/input.txt
    COPYONLY
)
