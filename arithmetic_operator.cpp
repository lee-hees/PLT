#include <stdio.h>

void main()
{

	int i = 0;
	i = +1;
	i = 2 + (-1);

	printf("%i, %i, %i\r\n", i + 2, i * 5, 8 / 2);
	// 3, 5, 4

	printf("%i, %i\r\n", 8 / 3, 10 / 3);
	// 2, 3

	int sum = 0;
	int tmp = 1;
	while (tmp <= 10)
	{
		sum = sum + tmp;
		// tmp = tmp + 1;
		// tmp++;
		++tmp;
	}
	printf("%i\r\n", sum);
	// 55

	int i = 0;
	int j = 0;
	int k = 0;

	// i = i + (++j) - (k--) + (j++) + k;
	++j;
	i = i + j - k + j + k;
	k++;
	j++;
	// 분리하여 작성 --> 가동성 향상

	printf("%i, %i, %i\r\n", i, j, k);
	// 2, 2, 1

	int i = 1;
	while (i <= 10)
	{
		int tmp = i % 3;
		// 나머지 이용 --> 순환 | 공배수 등 이용 가능
		if (tmp == 0)
		{
			printf("%i\r\n", i);
		}
		i = i + 1;
	} // 1 ~ 10 중 3의 배수
	// 3
	// 6
	// 9

	return;
}
