/*#include<stdio.h>

int main()
{
	int number[8][8];  // 0 ; ' '���� 1:  @

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
	int number[8][8];  // 0: ����, 1: @

	for (int i = 0; i < 8; i++) // �� �ݺ�
	{
		for (int j = 0; j < 8; j++) // �� �ݺ�
		{
			number[i][j] = (i + j) % 2; // ¦���� 0, Ȧ���� 1

			if (number[i][j] == 0)
				printf("  "); // ���� (������ ���� 2ĭ)
			else
				printf("@ ");
		}
		printf("\n"); // �� �ٲ�
	}

	return 0;
}
*/

#include <stdio.h>
int main()
{
	int number[20][20];  // 0: ����, 1: @

	for (int i = 0; i < 20; i++) // �� �ݺ�
	{
		for (int j = 0; j < 20; j++) // �� �ݺ�
		{
			number[i][j] = i * 2 + j;
			printf("%d", number[i][j]);
		}
		printf("\n"); // �� �ٲ�
	}

	printf("%d", *number[15] + 1);

}
