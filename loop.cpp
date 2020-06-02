#include <stdio.h>

void main(){

	int i=0;

	// i 가 10 미만이면 반복문 실행
	//      10 이상이면 반복문 종료
	while (i < 10)
	{
		printf("%i\r\n",i);
		i = i + 1;
	}

	return;
}
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9