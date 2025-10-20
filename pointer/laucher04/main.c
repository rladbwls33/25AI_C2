#include<stdio.h>
#include<stdlib.h> 
#define NUM 10
int main()
{
	//배열배우는 4주차 

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





		char a[5000];    // 문자 배열 선언 (숫자를 문자로 저장하려면 '0'~'9'로 변환 필요)
		int size = 10;   // 예시: 10개만 출력
		int i;

		// 랜덤 시드 초기화
		srand((unsigned)time(NULL));

		// 배열에 랜덤 값 넣기
		for (i = 0; i < size; i++) {
			a[i] = rand() % 10;   // 0~9 범위 숫자
		}

		// 출력하기
		printf("a");
		for (i = 0; i < size; i++) {
			printf("%d", a[i]);   // char지만 숫자라서 %d로 출력
			if (i < size - 1) {
				printf(" \n ");
			}
		}
		printf("\n");

		return 0;
	}


	
		
