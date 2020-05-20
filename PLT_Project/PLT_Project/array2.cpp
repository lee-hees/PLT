#include <stdio.h>

void main()
{
	int a[ 2 ][ 4 ] = { { 1, 3, 5, 7 }, { 10, 30, 50, 70 } };

	int* ap0;
	int* ap1;

	ap0 = a[ 0 ];
	ap1 = a[ 1 ];

	printf( "%i, %i\r\n", a[ 0 ][ 0 ], a[ 1 ][ 0 ] ); // 배열 이용
	printf( "%i, %i\r\n", *( a[ 0 ] + 1 ), *( a[ 1 ] + 1 ) ); // 포인터 이용

	int i = 1;
	int*ip;
	int **ipp; // 포인터의 포인터 / 이중 포인터
	ip = &i;
	ipp = &ip;
	printf( "%i %i %p %p %p\r\n", *ip, **ipp, ip, &ip, ipp );

	char c[ 2 ][ 8 ] = { "hello", "world" };
	printf( "%c %c %s\r\n", *c[ 0 ], c[ 0 ][ 0 ], c[ 1 ] );

	// 관리되지 않는 메모리 사용 지양
	{
		char*cp[ 2 ];
		cp[ 0 ] = "hello";
		cp[ 1 ] = "world";
		printf( "%s %s\r\n", cp[ 0 ], cp[ 1 ] );
	}
}