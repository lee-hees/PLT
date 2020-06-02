#include <stdio.h>

int main(){

	char i;
	i = 127; // 10진수
	printf("10진수 : %i\r\n", i);
	printf("16진수 : 0x%x\r\n", i);
	printf("08진수 : %o\r\n", i);
	printf("문자형 : %c\r\n", i);

	puts("");

	i = 0x7f; // 16진수 // '0x'를 붙여 16진수라고 표시해줌
	printf("10진수 : %i\r\n", i);
	printf("16진수 : 0x%x\r\n", i);
	printf("08진수 : %o\r\n", i);
	printf("문자형 : %c\r\n", i);
	return 0;

}
//10진수 : 127
//16진수 : 0x7f
//08진수 : 177
//문자형 : 
//
//10진수 : 127
//16진수 : 0x7f
//08진수 : 177
//문자형 : 