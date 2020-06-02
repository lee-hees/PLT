#include <stdio.h>

void main(){

	printf("-----pointer-----\r\n");

	int i;
	int j = 2;
	i = j; // assignment operator(대입 연산자)
	int k = 3;
	j = k;

	int* ip;
	ip = &j; // & : address of operator(주소 연산자)

	printf("  i - %i\r\n", i);
	printf(" &j - %p\r\n", &j);
	printf(" ip - %p\r\n", ip);
	// dereference operator(contents of operator)(역참조 연산자(실제 값))
	printf("  j - %i\r\n", j);
	printf("*ip - %i\r\n", *ip);
	puts("");

	printf("-----string literal-----\r\n");

	const char* s;
	s = "hello";

	int si = 0;
	int sj = 0;

	si = *s; // 'h'의 아스키코드
	sj = *(s + 1); // 'e'의 아스키코드

	printf("%p\r\n", s); // 주소
	printf("%c\r\n", *s); // 문자
	printf("%s\r\n", s); // 문자열
	printf("%i\r\n", *s); // 아스키코드
	puts("");
	printf("%i\r\n", si); // 'h'의 아스키코드
	printf("%i\r\n", sj); // 'e'의 아스키코드
	puts("");
	printf("%%i --> %3i / %%c --> %c\r\n", *(s + 1), *(s + 1)); // 아스키코드 / 문자
	printf("%%i --> %3i / %%c --> %c\r\n", s[1], s[1]); // 아스키코드 / 문자
	printf("%%i --> %3i / %%c --> %c\r\n", 1[s], 1[s]); // 아스키코드 / 문자
	printf("%%i --> %3i / %%c --> %c\r\n", s[5], s[5]); // 아스키코드 / 문자

	return;
}
//---- - pointer-----
//i - 2
//& j - 005AF87C
//ip - 005AF87C
//j - 3
//* ip - 3
//
//-----string literal-----
//00B458D4
//h
//hello
//104
//
//104
//101
//
//% i--> 101 / %c--> e
//%i--> 101 / %c--> e
//%i--> 101 / %c--> e
//%i-->   0 / %c-->