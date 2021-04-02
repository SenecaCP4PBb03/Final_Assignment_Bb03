@echo off

where gcc
if errorlevel 1 set path=%path%;C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin

gcc %1 -o test
if errorlevel 1 exit /b 1

test
