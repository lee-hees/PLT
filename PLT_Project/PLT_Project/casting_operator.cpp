#include <stdio.h>
void main()
{

	int i = 1; // 정수형
	double f = 2.1; // 실수형

	i = (int)((double)i + f); 
	// 정수형과 실수형..
	// 다른 자료형끼리 연산시
	// 더 정밀한 자료형으로 형변환을 시켜야 오류 발생을 막을 수 있다.
	
	printf("%i, %g\r\n", i, f);
	// 3, 2.1

	return;
}
