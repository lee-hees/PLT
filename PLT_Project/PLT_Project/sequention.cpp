﻿// sequention --> 순서대로
// scope rule --> 전역, 지역변수의 개념

#include <stdio.h>

int i = 10;

void main(){

	int i = 20;

	// 가장 가까운 지역변수는 변수명을 그대로 사용
	//             전역변수는 변수명에 ::를 붙여 사용
	printf("%i, %i\r\n", i, ::i);

	{
		int i = 30;

		// 값이 30인 변수가 선택됨
		printf("%i\r\n", i);
		{
			int i = 40;

			// 값이 40인 변수가 선택됨
			printf("%i\r\n", i);
		}
		// 값이 40인 변수는 현재 지역의 변수에서 제외되어
		// 가장 가까운 변수는 값이 30인 변수이다
		printf("%i\r\n", i);
	}

	// 값이 30인 변수는 현재 지역의 변수에서 제외된다
	// 값이 40인 변수는 현재 지역의 변수에서 제외된다
	// 가장 가까운 변수는 값이 20인 변수이다
	printf("%i\r\n", i);


	return;
}
//20, 10
//30
//40
//30
//20