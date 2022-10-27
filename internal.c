#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include "external.h"

int main( int argc, TCHAR *argv[] ) {

    // gets info
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    // error haven
    startingprog();
    CreateProcessA(
        NULL,
        argv[1],
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi
    );
    WaitForSingleObject( pi.hProcess, INFINITE );
    CloseHandle( pi.hProcess );
    CloseHandle( pi.hThread );
    

    return 0;
}