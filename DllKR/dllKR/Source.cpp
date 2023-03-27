#include "Header.h"

int Count(int* n)
{

	if (n[0] <= 2 && n[1] <= 2)
	{
		arr = calloc(2, sizeof(int));
		if (n[1] == 2)
		{

			arr[0] = 1;
		}
		else
		{

			arr[0] = 0;
		}
		arr[1] = clock();
		return arr;
	}
	if (n[0] <= 1 && n[1] > 2)
	{
		n[0] = 2;
	}
	if ((n[0] > 1) && (n[1] > n[0]))
	{

		arr = calloc(2, sizeof(int));
		InitializeCriticalSection(&section);
		EnterCriticalSection(&section);
		int zn = 0;
		for (n[0]; n[0] <= n[1]; n[0]++)
		{
			zn++;

			int  k = 0;
			for (int i = 2; i < n[0]; i++)
			{

				if (n[0] % i == 0) k++;
				else k += 0;
			}

			if (k == 0) d++;
			else d += 0;

			LeaveCriticalSection(&section);

		}

		if (threads != NULL)
		{
			for (int i = 0; i < countThread; i++)
			{
				ExitThread(0);
			}
		}
		else
		{
			arr[0] = d;
			arr[1] = clock();
			return arr;
		}
	}
	else
		return 0;
}


int Threads(int* n, int countTreads)
{

	threads = calloc(sizeof(HANDLE), countTreads);
	countThread = countTreads;
	DWORD Thread;

	for (int i = 0; i < countThread; i++)
	{
		threads[i] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Count, n, 0, &Thread);
	}
	WaitForMultipleObjects(countTreads, threads, TRUE, INFINITE);
	DeleteCriticalSection(&section);

	arr[0] = d;
	arr[1] = clock();

	return arr;
}