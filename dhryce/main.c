#include <windows.h>

extern void main(); // in dhry21a.c

int WINAPI WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR     lpCmdLine,
                     int       nCmdShow)
{
	main();
	return 0;
}

