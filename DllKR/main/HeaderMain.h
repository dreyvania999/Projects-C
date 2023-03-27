#pragma once
#include <Windows.h>
#include <stdio.h>
#include <malloc.h>
#define PATH L"dllKR.dll"
typedef int(_cdecl* MyFunction)(int*);
typedef int(_cdecl* MyFunctionTreads)(int*, int);