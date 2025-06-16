@echo off
setlocal

REM Change Generator depending on the one you using!

set TARGET=swap_two_ints
set ROOT=..\..

echo [*] Generating build system from %ROOT%...
if not exist "%ROOT%\build" (
    mkdir "%ROOT%\build"
)
cmake -S %ROOT% -B %ROOT%\build -G "MinGW Makefiles"
if errorlevel 1 goto error

echo [*] Building target: %TARGET%...
cmake --build %ROOT%\build --target %TARGET%
if errorlevel 1 goto error

echo [*] Running binary:
%ROOT%\build\src\%TARGET%\%TARGET%.exe
goto end

:error
echo ❌ Build or execution failed.
exit /b 1

:end
echo Build Run Done.