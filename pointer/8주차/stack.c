#include<stdio.h>
#include<stdlib.h>
int main()
{
	//malloc(에멀록) - 메모리를 내가 원하는 만큼 하는것 메모리 얼록케이션 
	int arr[4] = { 4,3,2,1 };
	int* pArr;

	pArr = (int*)malloc(sizeof(int) * 4);
	if (pArr == NULL)
	{
		printf("malloc error");
	}
	for (int i = 0; i < 4; ++i)
	{
		pArr[i] = arr[i];
	}
	for (int i = 0; i < 4; ++i)
	{
		printf("%d \n", pArr[i]);
	}
	free(pArr);
	system("pause");
	return 0;

}