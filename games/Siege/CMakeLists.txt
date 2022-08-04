add_library(Siege SHARED game.cpp game.h)
add_compile_definitions(EXPORTS)

include_directories(
    "../../API/"
)


set (LibDir "${PROJECT_SOURCE_DIR}")
install(TARGETS Siege RUNTIME DESTINATION bin)