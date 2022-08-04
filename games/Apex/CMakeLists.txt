
add_library(Apex SHARED game.cpp game.h)
add_compile_definitions(EXPORTS)

include_directories(
    "../../API/"
)

set (LibDir "${PROJECT_SOURCE_DIR}")
install(TARGETS Apex RUNTIME DESTINATION bin)