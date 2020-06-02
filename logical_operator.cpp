#include <stdio.h>
void main()
{

	int i = 0;
	int j = 3;
	while (i <= 10 && j <= 10) // i와 j 중 하나라도 10보다 커지면 반복 종료 (AND)
	{
		printf("%i, %i\r\n", i, j);
		++i;
		++j;
	}
	// 0, 3
	// 1, 4
	// 2, 5
	// 3, 6
	// 4, 7
	// 5, 8
	// 6, 9
	// 7, 10


	return;
}
