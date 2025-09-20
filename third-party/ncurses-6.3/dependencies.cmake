find_package(Curses REQUIRED)

# Create interface target (no need for a library file)
add_library(NcursesImported INTERFACE)

# Include directories
target_include_directories(NcursesImported INTERFACE ${CURSES_INCLUDE_DIR})

# Link system library
target_link_libraries(NcursesImported INTERFACE ${CURSES_LIBRARIES})