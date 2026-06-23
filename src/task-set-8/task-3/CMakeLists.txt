add_executable(task-8-3 main.cpp)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/matrix.txt
    ${CMAKE_CURRENT_BINARY_DIR}/matrix.txt
    COPYONLY
)
