set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ui)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/input)


add_executable(my_editor ${SOURCE_DIR}/main.cpp)
target_link_libraries(my_editor PRIVATE ui_tui)
