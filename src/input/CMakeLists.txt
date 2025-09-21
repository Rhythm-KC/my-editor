set(INPUT_SOURCES
    ${SOURCE_DIR}/input/raw_terminal_input_processing.cpp)

add_library(raw_input_processing STATIC ${INPUT_SOURCES})

set_target_properties(raw_input_processing PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/input
    OUTPUT_NAME "input_processing"
)
target_include_directories(raw_input_processing PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)