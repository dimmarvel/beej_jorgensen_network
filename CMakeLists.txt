cmake_minimum_required( VERSION 3.4.0 )
project(test CXX )

set (SOURCE_EXE main.cpp)

include_directories(net/include) # Расположение заголовочных файлов

add_executable(test ${SOURCE_EXE}) # Создает исполняемый файл с именем main

add_subdirectory(net) # Добавление подпроекта, указывается имя дирректории

target_link_libraries(test network) # Линковка программы с библиотекой