#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <malloc.h>
#include <time.h>

BOOL WINAPI DllMain(HINSTANCE hlnstDll, DWORD dwReason, LPVOID IpReserved)
{
	BOOL bAllWentWell = TRUE;
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	if (bAllWentWell)
		return TRUE;
	else
		return FALSE;
}

HANDLE* threads = NULL;
int d = 0;
int* arr = 0;
int countThread = 0;
CRITICAL_SECTION section = { 0 };

extern __declspec(dllimport) int Count(int*);
extern __declspec(dllimport) int Threads(int*, int);


