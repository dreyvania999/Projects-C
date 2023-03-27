#include "HeaderMain.h"
int main()
{
	system("chcp 1251>nul");
	HINSTANCE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	int* n = calloc(2, sizeof(int));

	n[0] = 2;
	n[1] = 266053;

	/*MyFunction myFunc = (MyFunction)GetProcAddress(hMyDLL, "Count");
	int* r = calloc(2, sizeof(int));
	r = myFunc(n);

		printf("Количество простых числел от %d до %d = %d\n",n[0],n[1], r[0]);
		printf("Время работы при подсчете вызывая функцию %d\n", r[1]);*/

	MyFunctionTreads myFuncTr = (MyFunctionTreads)GetProcAddress(hMyDLL, "Threads");
	int* rT = calloc(2, sizeof(int));
	int threadcount = 8;
	rT = myFuncTr(n, threadcount);
	printf("Количество простых числел от %d до %d = %d\n", n[0], n[1], rT[0]);
	printf("Время работы при подсчете через %d потоков %d\n", threadcount, rT[1]);

	MyFunctionTreads myFuncTr1 = (MyFunctionTreads)GetProcAddress(hMyDLL, "Threads");
	int* rT1 = calloc(2, sizeof(int));
	int threadcount1 = 8;
	rT1 = myFuncTr1(n, threadcount1);
	printf("Количество простых числел от %d до %d = %d\n", n[0], n[1], rT1[0]);
	printf("Время работы при подсчете через %d потоков %d\n", threadcount1, rT1[1]);
	system("pause");
	FreeLibrary(hMyDLL);
	return 0;
}

