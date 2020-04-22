#include <stdio.h>

int sum(int a, int b){
	return a + b;
}

void main()
{

	int i = 0;
	i = (2, 3, 4); // 2, 3, 4 중 마지막 --> 4
	printf("%i\r\n", i);
	// 4
	i = 2, 3, 4; // 묶이지 않아 따로 --> 2
	printf("%i\r\n", i);
	// 2

	int j;
	j = ((i = 2), 3, 4); // 2, 3, 4 중 마지막 --> 4
	printf("%i, %i\r\n", i,j);
	// 2, 4

	int k;
	k = sum(2, 3); // 2 + 3 = 5
	printf("%i\r\n", k);
	// 5
	k = sum((2, j = 3),4); // (2, 3 중 마지막 --> 3) + 4 = 7
	printf("%i\r\n", k);
	// 7


	return;
}
