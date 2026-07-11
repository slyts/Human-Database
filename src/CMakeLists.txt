set(SOURCE
    Main.cpp
    Application.cpp
)

set(HEADERS
    Application.h
)

target_sources(${PROJECT_NAME} PRIVATE ${SOURCE} ${HEADERS})
