#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include "external.h"

void startingprog(int argc, TCHAR *argv[]) {
    // also gets info (i was lazy)
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    // checks
    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

    if( argc != 2 && argc != 3)
    {
        printf("Usage: %s Command\n", argv[0]);
        return;
    }


}