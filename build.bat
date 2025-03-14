@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001

set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=projects

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .

:: Копирование run_obuchaika.bat из каталога обучайки
copy ..\%SOURCE_FOLDER%\obuchaika\run_obuchaika.bat .\obuchaika
