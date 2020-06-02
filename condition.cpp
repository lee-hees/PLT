#include <stdio.h>

void main(){

	int i;
	int j;
	i = 2 + 3; // integer 표현
	j = (2 > 3); // boolean 표현

	// 조건 i > j 가 참이면 실행
	if (i > j)
		printf("%i, %i, %i\r\n", i, j, i > j);

	// 조건이 
	// 0이 아니면 참
	// 0이면 거짓
	if (-1)
		printf("condition is true\r\n");
	else
		printf("condition is false\r\n");

	// 문자열이 
	// NULL 또는 '\0' 이 아니면 참
	// NULL 또는 '\0' 이면 거짓
	if ("hello")
		printf("hello\r\n");
	if (!NULL)
		printf("not NULL\r\n");
	if (!'\0')
		printf("not NULL(\"\\0\")\r\n");

	// integer 형태의 변수에 출력할 문자열의
	// 출력식과 문자열 길이가 저장됨
	int k = printf("1234567890");
	// %i 인 integer 형태로 출력시
	// k에 저장된 함수를 실행하고
	// 문자열 길이가 integer 형태로 출력됨
	printf("%i\r\n", k);

	return;
}
//5, 0, 1
//condition is true
//hello
//not NULL
//not NULL("\0")
//123456789010