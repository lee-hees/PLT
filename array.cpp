#include <stdio.h>
#include <string.h>

typedef char* STRING;


void TEST(char*);

void main()
{
	const int i = 0;
	//i = 2; // 상수는 변경 불가능

	//int a[5] = { 1, 3, 5 };
	int a[5]{ 1, 3, 5 }; // uniform initialization
	//a[0] = 1;
	//a[1] = 3;
	//a[2] = 5;
	//a[3] = 0;
	//a[4] = 0;

	int* ap;
	ap = a;

	for (int i = 0; i < 5; i++){
		printf("%i ", *(a + i));
	}
	printf("\r\n");
	for (int i = 0; i < 5; i++){
		printf("%i ", a[i]);
	}
	printf("\r\n");
	for (int i = 0; i < 5; i++){
		printf("%i ", ap[i]);
	}
	printf("\r\n");

	printf("--------------------\r\n");

	char c[6] = "hello";
	TEST(c);

	strcpy_s(c, "world");
	//char* cp;
	//cp = "world";
	//for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++){
	//	c[i] = *(cp + i);
	//}

	TEST(c);

	const char* AAA; // 수정되면 안됨
	AAA = "123456";

	//AAA[5] = '\0'; // 바꿀 수 없어야함

	printf("%s\r\n", AAA);



}

//void TEST(char c[])
void TEST(STRING c)
{
	printf("%s\r\n", c);
}