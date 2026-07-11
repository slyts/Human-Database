set(SOURCE
    Display.cpp
    InputManager.cpp
)

set(HEADERS
    Display.h
    InputManager.h
)

target_sources(${PROJECT_NAME} PRIVATE ${HEADERS} ${SOURCE})