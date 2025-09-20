set(TUI_SOURCES
    ${CMAKE_SOURCE_DIR}/src/ui/context.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tui_render_api.cpp
)
add_library(ui_tui STATIC ${TUI_SOURCES})

set_target_properties(ui_tui PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/ui/tui
    OUTPUT_NAME "tui"
)
target_include_directories(ui_tui PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

#link third party
target_link_libraries(ui_tui PRIVATE NcursesImported)