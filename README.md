# Human Database

Console-based application for managing human records with unique ID generation. This is my personal learning project.

## Features

- Add new human
- Display all records in a formatted table
- Automatic unique ID generation
- Find by name
- Save/Load system

## Build and Run

### Using CMake (recommended)
```bash
mkdir build
cd build
cmake ..
cmake --build .
./HumanDatabase   # or ./HumanDatabase.exe on Windows
```
or
```bash
g++ -o program Main.cpp Application.cpp Person.cpp IdGenerator.cpp InputManager.cpp Display.cpp PersonReader.cpp PersonSaver.cpp
./program
```

## TODO

- No active development planned. This project served its purpose for learning.

---

> **Note:** This project was migrated to CMake for learning purposes. Both build systems are supported.

# Human Database

Консольное приложение для управления записями о людях с автоматической генерацией ID. Это мой личный проект для обучения.

## Возможности

- Добавление человека
- Вывод всех записей в таблице
- Автоматическая генерация ID
- Поиск по имени
- Cистема сохранения/загрузки

## Сборка и запуск

### Использовать CMake (рекомендуется)
```bash
mkdir build
cd build
cmake ..
cmake --build .
./HumanDatabase   # or ./HumanDatabase.exe on Windows
```
или
```bash
g++ -o program Main.cpp Application.cpp Person.cpp IdGenerator.cpp InputManager.cpp Display.cpp PersonReader.cpp PersonSaver.cpp
./program
```

## Планы

- Прочие штуки

> **Примечание.** Этот проект был перенесен на CMake в учебных целях. Поддерживаются обе системы сборки.
