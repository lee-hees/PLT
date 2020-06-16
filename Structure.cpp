#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct People // 타입 정의
{
	// 멤버 변수 정의
	int age;
	char name[ 10 ];

	void printPeople( )
	{
		//printf( "%-9s : %i\r\n", ( *this_ ).name, ( *this_ ).age );
		printf( "%-9s : %i\r\n", name, age );
	}

	void add_age( int AGE )
	{
		//( *A ).age = AGE;
		age = AGE;
	}

	void change_name( )
	{
		strcpy_s( name, "set name" );
	}

};


void main( )
{
	struct People a; // 구조체 a 선언
	a.age = 47;
	strcpy_s( a.name, "hello" );
	char*cp = ( char* )&a;
	//printf( "%c\r\n", cp[ 5 ] );

	a.printPeople( );
	a.add_age( a.age + 1 );
	a.change_name( );
	a.printPeople( );

	People* b; // 구조체 포인터 b 선언
	b = ( People* )malloc( sizeof( People ) );
	b->age = 50;
	strcpy_s( b->name, "world" );

	b->printPeople( );
	b->add_age( b->age + 1 );
	b->change_name( );
	b->printPeople( );

	free( b );

}

