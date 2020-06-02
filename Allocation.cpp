#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>

void Test( char a[ ][ 8 ] )
{
	printf( "%s, %s\r\n", a[ 0 ], a[ 1 ] );
}

void intAlloc( int** ip ) // 해당 주소에서 변경하기 위해 이중 포인터를 인자로
{
	//*ip = ( int* )malloc( sizeof( int ) ); // 동적할당 -- heap 영역
	*ip = new int;
}

void main( )
{
	{
		char a[ 2 ][ 8 ] = { "hello", "world" };
		Test( a );
	}

	printf( "\r\n" );

	{

		int * ip = NULL; // int 변수를 가리키는 포인터
		int( *ip2 )[ 10 ]; // int 변수 10개를 가리키는 (포인터) 배열
		int * ip3[ 10 ]; // 크기가 10인 int형 배열을 가리키는 포인터

		//ip = ( int* )malloc( sizeof( int ) ); // 동적할당 -- heap 영역
		intAlloc( &ip ); // 함수에서 따로 만드는 것이 아니라 직접 해당 주소에서 변경
		*ip = 1;
		printf( "%i\r\n", *ip );

		ip2 = new int[ 2 ][ 10 ];
		ip2[ 0 ][ 0 ] = 1;
		ip2[ 1 ][ 1 ] = 10;
		printf( "%i\r\n", ip2[ 0 ][ 0 ] );
		printf( "%i\r\n", ip2[ 1 ][ 1 ] );


		//free( ip ); // 동정할당 해제
		delete ip; // new 키워드를 이용하여 동적 할당 시 해제하는 키워드
		delete ip2;

	}

}

