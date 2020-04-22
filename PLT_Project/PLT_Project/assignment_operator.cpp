#include <stdio.h>

void main()
{

	int a = 1;
	while (a <= 10)
	{
		int tmp = a % 3;
		// 나머지 이용 --> 순환 | 공배수 등 이용 가능
		if (tmp == 0)
		{
			printf("%i\r\n", a);
		}
		// a = a + 1;
		// a++;
		// ++a;
		a += 1;

	} // 1 ~ 10 중 3의 배수
	// 3
	// 6
	// 9

	int i = 5;
	int j = 2;
	int k = 3;

	// i = i + (j * k);
	// i += j * k;
	// 결합법칙이 적용이 상관 없다면 사용 가능


	// i = i * j + k; // i == 13

	// i = i * (j + k); // i == 25
	// i *= j + k; // i == 25
	// 결합법칙의 원칙에 따라 두 연산 결과가 다르다면 구분해서 사용


	j = (i = 1);
	// 대입은 연쇄로 가장 오른쪽부터 왼쪽으로 진행된다.
	printf("%i, %i\r\n", i, j);
	// 1, 1


	if (i == 1) // i 가 1이므로 true
	{
		printf("true\r\n");
	}
	// true

	if (i == 2) // i 가 2가 아니므로 false
	{
		printf("true\r\n");
	}
	else{
		printf("false\r\n");
	}
	// false

	if (i = 2) // 비교가 아니라 대입이므로 결과가 0이 아니라서 true
	{
		printf("true\r\n");
	}
	else{
		printf("false\r\n");
	}
	// true

	return;
}
