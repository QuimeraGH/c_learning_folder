@echo off
cmake --preset default
cmake --build --preset default --target %1
.\build\src\%1\%1.exe
