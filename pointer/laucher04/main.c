#include<stdio.h>
#include<stdlib.h> 
#define NUM 10
int main()
{
	//�迭���� 4���� 

	/*char a[6];

	 a[6] = "L";
	 a[6] = "L";
	 a[6] = "L";
	 a[6] = "L";
	 a[6] = "L";
	 a[6] = "L";

	int i = 0;
	for (i=0;i<6;i++)
	{
		printf("%c", a[i]);
	}*/



	/*int r_valve = rand() % NUM;

	char a[NUM];
	char b[NUM];

	for (int i = 0; i < NUM; i++) {

		printf("%d , i");
		
	}
	*/





		char a[5000];    // ���� �迭 ���� (���ڸ� ���ڷ� �����Ϸ��� '0'~'9'�� ��ȯ �ʿ�)
		int size = 10;   // ����: 10���� ���
		int i;

		// ���� �õ� �ʱ�ȭ
		srand((unsigned)time(NULL));

		// �迭�� ���� �� �ֱ�
		for (i = 0; i < size; i++) {
			a[i] = rand() % 10;   // 0~9 ���� ����
		}

		// ����ϱ�
		printf("a");
		for (i = 0; i < size; i++) {
			printf("%d", a[i]);   // char���� ���ڶ� %d�� ���
			if (i < size - 1) {
				printf(" \n ");
			}
		}
		printf("\n");

		return 0;
	}


	
		
