set(SOURCE
    Person.cpp
    PersonReader.cpp
    PersonSaver.cpp
)

set(HEADERS
    Person.h
    PersonReader.h
    PersonSaver.h
)

target_sources(${PROJECT_NAME} PRIVATE ${HEADERS} ${SOURCE})