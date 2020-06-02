#include <stdio.h>
void main()
{

	int i = 5;
	int j = 2;
	int k = 3;

	j = sizeof(i); // 정수형 변수의 크기는 4바이트

	k = sizeof(int); // 정수형 자료형 --> 크기는 4바이트
	
	printf("%i, %i\r\n", j, k);
	// 4, 4

	int* ip = &i; // 정수형 변수를 가리키는 포인터 변수
	
	printf("%i, %i, %i\r\n", sizeof(ip), sizeof(*ip), sizeof(&ip));
	// x32
	// 4, 4, 4

	// x64
	// 8, 4, 8

	return;
}
