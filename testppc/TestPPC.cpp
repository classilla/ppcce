#include <windows.h>
#include <windowsx.h>

#include "stdafx.h"


int WINAPI WinMain (HINSTANCE hInstance,
		             HINSTANCE hPrevInstance,
                     LPTSTR lpCmdLine,
                     int nCmdShow)
{
	return MessageBox(NULL, _T("Hello World"), _T("Hello World"), MB_OK);
}

