#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

struct People // 타입 정의
{
	// 멤버 변수 정의
	int age;
	char name[ 10 ];
};

//void printPeople( People A )
//{
//	printf( "%-9s : %i\r\n", A.name, A.age );
//}
// 위처럼 값으로 전달하지 말고 주소를 전달 해야한다.
void printPeople( People* A )
{
	printf( "%-9s : %i\r\n", ( *A ).name, ( *A ).age );
}

void add_age( People* A, int AGE )
{
	( *A ).age = AGE;
}

void change_name( People* A )
{
	strcpy_s( ( *A ).name, "set name" );
}

void main( )
{
	struct People a; // 구조체 a 선언
	a.age = 47;
	strcpy_s( a.name, "hello" );
	char*cp = ( char* )&a;
	printf( "%c\r\n", cp[ 5 ] );

	struct People b; // 구조체 b 선언
	b.age = 50;
	strcpy_s( b.name, "world" );

	printPeople( &a );
	add_age( &a, a.age + 1 );
	change_name( &a );
	printPeople( &a );
	//printPeople( b );

}

