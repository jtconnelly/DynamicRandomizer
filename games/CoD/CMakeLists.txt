add_library(CoD SHARED game.cpp game.h)
add_compile_definitions(EXPORTS)

include_directories(
    "../../API/"
)

set (LibDir "${PROJECT_SOURCE_DIR}")
install(TARGETS CoD RUNTIME DESTINATION bin)
install(FILES "CodFallback.txt" DESTINATION bin)