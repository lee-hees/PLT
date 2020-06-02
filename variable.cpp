#include <stdio.h>
#include "variable_extern.h"

int a = 1;

void TEST();

void main()
{

	TEST();
	TEST();
	TEST();
	TEST();
	TEST();
	TEST();
	TEST();

}

void TEST(){

	int b = 12;
	static int c = 123;

	// 전역 변수는 어디서든 바뀐다
	// 비추천 - 다른 함수에서 조작하지 않도록 한다
	printf("%i, ", a);
	a++;

	// 지역 변수는 함수가 실행될 때마다 초기화 되어 더하기 연산 수행이 보이지 않는다
	printf("%i, ", b);
	b++;

	// 정적 변수
	// 지역 변수 범위에서 값이 유지되어 전역 변수처럼 쓰인다
	printf("%i, ", c);
	c++;

	// 다른 파일에서 전역 변수
	// extern 키워드를 사용해 사용할 수 있도록 한다
	// 헤더파일에서 관리하여 코드를 줄일 수 있다
	printf("%i\r\n", d);
	d++;
}
