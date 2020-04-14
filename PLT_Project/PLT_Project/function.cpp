// 전처리지시자 #~ : #include, #if, #define 등
// 관례상 include는 제일 위에
#include <stdio.h> // 표준 헤더, 외부 헤더 파일
#include <conio.h> // _getch() 함수 사용 가능 // 콘솔 input output
//extern "C"{
//    int _cdecl _getch();
//}

int f(int x); // declaration
int h(int x, int y);

//int, _2_fun : 키워드
//구분되는 것.. : 토큰(token)
int main() // 4token
{
	//_getch(); // 입력

	int t = 0;
	t = h(3, 4); // call

	printf("hello world\r\n"); // 줄바꿈시 \r\n을 작성 해줄 것..다양한 문제 발생 방지
	printf("hello %% %i\r\n", t); // %i 자리에는 정수를 표시..','이후에 %의 순서대로 작성
	return 0;
}
//hello world
//hello % 12

int h(int x, int y)
{
	int t;

	t = f(x) + y; // call

	return t;
}

int f(int x) // definition
{
	int t;

	t = x + 5;

	return t;
}
