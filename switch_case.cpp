#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;

	ch = _getch();
	//if (ch == 97)
	if (ch == 'a' || ch == 'A')
	{
		printf("abc\r\n");
	}
	//else if (ch == 104)
	else if (ch == 'h' || ch == 'H')
	{
		printf("hello\r\n");
	}
	else
	{
		printf("nothing\r\n");
	}

	ch = _getch();
	switch (ch){
	case 'a':
	case 'A':
		printf("abc\r\n");
		break; // 미작성 시 아래의 동작도 수행됨
	case 'h':
		//case 'a' + 7:
	case 'H':
		printf("hello\r\n");
		break; // 미작성 시 아래의 동작도 수행됨
	default:
		printf("nothing\r\n");
	}

	return 0;
}