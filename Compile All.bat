@echo off
echo Compiling all main gcc flags.
rmdir .\Compiled /s /q
mkdir .\Compiled
gcc .\internal.c .\external.c -Ofast -o .\Compiled\Ofast.exe
gcc .\internal.c .\external.c -Og -o .\Compiled\Debugflag.exe
gcc .\internal.c .\external.c -Oz -o .\Compiled\Oz.exe
echo finished