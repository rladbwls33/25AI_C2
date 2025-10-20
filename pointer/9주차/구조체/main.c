/*#include<stdio.h>
#include<windows.h>
#include<time.h>
struct fish
{
	char* name;
	char* talk;  //물고기가 퀴즈를 냄 
	int answer;
	char* talk_0;  //맞을떄 
	char* talk_x; // 틀릴떄 
};
// 물고기 5개 타입 fish 만들기 
int main()
{
	struct fish fishes[5] = {
		{"도리", "내 친구 이름은 뭘까? (1.니모  2.도리  3.광어)", 2, "정답이야! 똑똑하네~", "틀렸어! 도리야 도리~"},
		{"니모", "나는 어떤 색일까? (1.빨강  2.파랑  3.주황)", 3, "정답이야~", "에이~ 그게 아니지~"},
		{"광어", "나는 무슨 색일까? (1.갈색  2.청색  3.검정색)", 1, " 정답!", "틀렸어! 난 갈색이야"},
		{"해마", "나는 어디에 사는 동물일까? (1.육지  2.바다  3.강)", 2, " 똑똑하네!", "응 아니야~ 다시 생각해봐!"},
		{"문어", "다리는 몇 개일까? (1.6개  2.8개  3.10개)", 2, "문어 다리 8개 맞췄어!", "틀렸어~ 문어는 8개야~"}
	};
	//struct Fish fishes[5];
	//fishes[0].name =(char*)malloc(sizeof)
	printf("찌를 던진다 (y/n) >\n ");
	char YN;
	YN = _getch();

	system("cls");
	for (int i = 0; i < 5; ++i)
	{
		printf(".");
		Sleep(500);
	}
	
	printf("%c \n",YN);
	system("cls");
	if (YN == 'Y' || YN == 'y')
	{
		printf("잘 선택 했어!");
	}

	else if (YN == 'N' || YN == 'n')
	{
		printf("이거는 아니야");
	}
	else
	{
		printf("아니야");
	}
	// 랜덤 초기화
	srand((unsigned int)time(NULL));
	int index = rand() % 5; // 0~4 중 랜덤
	struct fish selected = fishes[index];
	if (YN == 'Y' || 'y')
	{
		printf(" %s가 나타났다!\n", selected.name);
		printf("%s\n", selected.talk);
		printf("정답 입력 (숫자 1~3): ");
	}
	else
	{
		printf("다시해 아니야");
	}

	char useranswer = _getch();
	
	int answer = useranswer - '0';

	printf("%c\n", useranswer); // 사용자가 입력한 값 보여주기 (선택사항)


	if (useranswer == selected.answer) {
		printf(" %s\n", selected.talk_0);
	}
	else {
		printf(" %s\n", selected.talk_x);
	}

	
	// 500ms마다 .하나 찍히도록 
	//printf("%s : 물고기 이름 , 질문 ); return 0; 
	return 0;
}*/

#include <stdio.h>   // 표준 입출력 함수들 (printf 등)을 사용하기 위해 포함
#include <windows.h> // Windows 전용 함수들(Sleep, system 등)을 사용하기 위해 포함
#include <time.h>    // time(), clock() 등 시간 관련 함수 사용 (난수 시드에 사용)
#include <conio.h>   // _getch() 사용 — 콘솔에서 키 입력을 즉시 받기 위해 필요 (Windows 전용)

/*
 구조체 정의: 물고기 한 마리의 정보를 담을 구조체
 각 물고기마다 이름(name), 질문(talk), 정답 번호(answer),
 정답일 때 말(talk_0), 오답일 때 말(talk_x)을 가짐
*/
struct fish {
    char* name;    // 물고기 이름을 가리키는 문자열 포인터
    char* talk;    // 물고기가 내는 퀴즈 문제(문자열)
    int answer;    // 정답(숫자 형태, 예: 1,2,3)
    char* talk_0;  // 정답일 때 출력할 문자열
    char* talk_x;  // 틀렸을 때 출력할 문자열
};

int main() {
    /* 5마리의 물고기 정보를 배열로 초기화
       중괄호로 각 구조체의 필드 순서대로 값을 넣음 */
    struct fish fishes[5] = {
        {"도리", "내 친구 이름은 뭘까? (1.니모  2.도리  3.광어)", 2, "정답이야! 똑똑하네~", "틀렸어! 도리야 도리~"},
        {"니모", "나는 어떤 색일까? (1.빨강  2.파랑  3.주황)", 3, "정답이야~", "에이~ 그게 아니지~"},
        {"광어", "나는 무슨 색일까? (1.갈색  2.청색  3.검정색)", 1, "정답!", "틀렸어! 난 갈색이야"},
        {"해마", "나는 어디에 사는 동물일까? (1.육지  2.바다  3.강)", 2, "똑똑하네!", "응 아니야~ 다시 생각해봐!"},
        {"문어", "다리는 몇 개일까? (1.6개  2.8개  3.10개)", 2, "문어 다리 8개 맞췄어!", "틀렸어~ 문어는 8개야~"}
    };

    /* 사용자에게 찌를 던질지 물어봄.
       printf로 안내문 출력 -> _getch()로 콘솔에서 한 글자 입력을 즉시 받음.
       _getch()는 Enter를 누를 필요 없이 즉시 키보드 입력(문자)을 반환.
       반환 타입은 int이지만 보통 char로 받음. (Windows 전용, conio.h 필요) */
    printf("찌를 던진다 (y/n) > ");
    char YN = _getch(); // 입력된 문자(예: 'y', 'n')를 YN 변수에 저장

    /* system("cls")로 화면을 지우는 것은 Windows 전용 동작.
       주의: system()은 보안과 이식성 측면에서 권장되지 않지만 간단히 콘솔 정리용으로 사용. */
    system("cls");

    /* 간단한 연출: 점(.)을 5번 찍고 잠깐씩 멈추며 기다리기.
       Sleep(ms)는 밀리초 단위로 멈춤 — windows.h에 정의되어 있음. */
    for (int i = 0; i < 5; ++i) {
        printf(".");   // 점 하나 출력
        Sleep(300);    // 300ms(0.3초) 대기
    }
    printf("\n");

    /* Y나 y를 눌렀는지 확인.
       '==' 연산자로 비교해야 하고, 또는(or) 체크는 (YN == 'Y' || YN == 'y')처럼 해야 함.
       잘못된 표현 예: (YN == 'Y' || 'y') 는 항상 참으로 평가됨(의도와 다름). */
    if (YN != 'Y' && YN != 'y') {
        // Y 또는 y가 아닐 경우: 게임 종료
        system("cls");
        printf("찌를 던지지 않았어... 게임을 종료할게!\n");
        return 0; // main 함수 종료 -> 프로그램 종료
    }

    // Y 또는 y를 눌렀을 때만 여기부터 진행
    system("cls");
    printf("잘 선택했어!\n");

    /* 랜덤 인덱스 생성:
       srand(time(NULL))로 난수 시드 초기화(현재 시간 기반).
       rand() % 5 는 0~4 범위의 정수 생성. (주의: rand()의 분포/품질은 아주 높지 않음)
       time(NULL)은 time_t 타입 반환, (unsigned int)로 캐스팅해서 사용. */
    srand((unsigned int)time(NULL));
    int index = rand() % 5;          // 0~4 중 하나의 랜덤 인덱스
    struct fish selected = fishes[index]; // 선택된 물고기 정보를 복사해서 사용

    /* 선택된 물고기와 문제 출력 */
    printf("%s가 나타났다!\n", selected.name);  // 물고기 이름 출력
    printf("%s\n", selected.talk);              // 그 물고기가 내는 퀴즈 출력
    printf("정답 입력 (숫자 1~3): ");           // 사용자에게 입력 안내

    /* _getch()로 한 글자 입력을 받음. 예: 사용자가 '2'를 누르면 문자 '2'를 반환.
       _getch()는 Enter를 누를 필요 없이 즉시 값을 반환한다. */
    char useranswer = _getch();

    /* 문자를 숫자로 바꾸기:
       ASCII 문자 '1'의 코드값은 49, '0'은 48 등.
       '2' - '0' => 50 - 48 = 2 처럼 문자 숫자를 실제 정수로 변환할 수 있음.
       이렇게 변환하면 selected.answer(정수형)과 직접 비교 가능. */
    int answer = useranswer - '0';

    printf("\n"); // 줄바꿈(선택사항, 콘솔 보기 좋게)

    /* 정답 비교:
       주의: 비교할 때는 변환한 int(answer)와 selected.answer를 비교해야 함.
       실수로 useranswer(문자)와 selected.answer(정수)를 직접 비교하면 항상 false가 될 수 있음
       ('1' != 1).
       따라서 answer 변수를 사용. */
    if (answer == selected.answer)
        printf("%s\n", selected.talk_0); // 정답 메시지 출력
    else
        printf("%s\n", selected.talk_x); // 오답 메시지 출력

    return 0; // 프로그램 정상 종료
}
