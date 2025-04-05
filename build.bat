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

set arr[0].file=run_test_long_number.bat
set arr[1].file=run_insertion_sort.bat
set arr[2].file=run_insertion_sort_mf.bat
set arr[3].file=run_obuchaika.bat

set arr[0].folder=class/test
set arr[1].folder=insertion_sort
set arr[2].folder=insertion_sort_mf
set arr[3].folder=obuchaika

for /L %%i in (0,1,3) do ( 
	if not exist .\!arr[%%i].folder!\!arr[%%i].file! (
		copy ..\%SOURCE_FOLDER%\!arr[%%i].folder!\!arr[%%i].file! .\!arr[%%i].folder!
	)
)

if not exist .\run_tests.bat copy ..\run_tests.bat .
