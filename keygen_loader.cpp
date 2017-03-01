#include <windows.h>
#include <stdio.h>
#define MAX_SERIAL 1024

int process_serial(char *serial);

int APIENTRY WinMain(HINSTANCE hinst, HINSTANCE hinstPrev, LPSTR lpCmdLine, int nCmdShow)
{
	srand(GetTickCount());
	char serial[MAX_SERIAL];
	memset(serial,0,MAX_SERIAL);
	int done = process_serial(serial);
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	//allocate memory
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	//create child process
	if (!CreateProcess("Cemu.exe",lpCmdLine,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)){
		return -1;
	}
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	return 0;
}