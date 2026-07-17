set(SOURCE
    IdGenerator.cpp
)

set(HEADERS
    IdGenerator.h
    MenuSwitcher.h
)

target_sources(${PROJECT_NAME} PRIVATE ${HEADERS} ${SOURCE})