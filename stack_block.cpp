#include <stdio.h>

void main()
{
	int i = 2;
	int j = 3;
	char* ip = (char*)&i;
	char* jp = (char*)&j;

	printf("%i\r\n", &i - &j);
	printf("%i\r\n", ip - jp);

	return;
}