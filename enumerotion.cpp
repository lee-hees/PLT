#include<stdio.h>

enum Color
{
	red, green, blue
};
//enum Red
// enum Red와 인자가 겹치기 때문에 실제로 사용 시 중복오류 발생
// 그 문제를 해결하기 위해 class를 사용하여 인자에 이름을 붙여 중복오류 제거
enum class Red
{
	red = 255,
	green = 0,
	blue = 0
};
//enum Green 
enum class Green
{
	red = 0,
	green = 255,
	blue = 0
};
//enum Blue 
enum class Blue
{
	red = 0,
	green = 0,
	blue = 255
};
/*****
그냥 enum은 여러 값을 가질 수 있는 정수형이고

class를 사용하면 변수의 타입을 정의하는 것이기 때문에
int가 아니라 본인이 지정한 타입으로 작성 해야한다
*****/

void main( )
{



	printf( "%i\r\n", sizeof( Color ) );
	printf( "%i\r\n", sizeof( Red ) );
	printf( "%i\r\n", sizeof( Green ) );
	printf( "%i\r\n", sizeof( Blue ) );
	int i = red;
	int j = green;
	if ( i == red )
	{
		printf( "i == red\r\n" );
	}
	else
	{
		printf( "j != red\r\n" );
	}

	if ( j == red )
	{
		printf( "j == red\r\n" );
	}
	else
	{
		printf( "j != red\r\n" );
	}

	int blue1 = blue;
	printf( "%i\r\n", blue1 );
	Red blue2 = Red::blue;
	printf( "%i\r\n", blue2 );
	Green blue3 = Green::blue;
	printf( "%i\r\n", blue3 );
	Blue blue4 = Blue::blue;
	printf( "%i\r\n", blue4 );


}

