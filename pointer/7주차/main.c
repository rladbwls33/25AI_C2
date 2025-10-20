/*#include<stdio.h>

int main()
{
	int number[8][8];  // 0 ; ' '공백 1:  @

	int i = 0;
	for (i = 0; i < 8; i = i + 1 )
	{
		int j = 0;
		for (i = 0; j < 16; j++)
		{
			number[j][i]= (i+j)%2;
			if (number[j][i] == 0)
				printf(" ");
			else {
				printf("@");
			}
		}
		printf("\n");
	}

}*/
/*#include <stdio.h>

int main()
{
	int number[8][8];  // 0: 공백, 1: @

	for (int i = 0; i < 8; i++) // 행 반복
	{
		for (int j = 0; j < 8; j++) // 열 반복
		{
			number[i][j] = (i + j) % 2; // 짝수면 0, 홀수면 1

			if (number[i][j] == 0)
				printf("  "); // 공백 (가독성 위해 2칸)
			else
				printf("@ ");
		}
		printf("\n"); // 줄 바꿈
	}

	return 0;
}
*/

#include <stdio.h>
int main()
{
	int number[20][20];  // 0: 공백, 1: @

	for (int i = 0; i < 20; i++) // 행 반복
	{
		for (int j = 0; j < 20; j++) // 열 반복
		{
			number[i][j] = i * 2 + j;
			printf("%d", number[i][j]);
		}
		printf("\n"); // 줄 바꿈
	}

	printf("%d", *number[15] + 1);

}
