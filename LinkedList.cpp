#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct People // 타입 정의
{
	// 멤버 변수 정의
	int age;
	char name[ 20 ];
	People* next;

};

People* headnode = nullptr;

void printPeople( People* p ) // 모든 노드 출력
{
	People* current = p;
	while ( current != nullptr )
	{
		printf( "%20s : %i\r\n", current->name, current->age );
		current = current->next;
	}

}

People* Create( ) // 노드 생성
{
	People* newnode = new People;
	newnode->next = nullptr;
	return newnode;
}

void setPeople( People* p, int age, const char*name ) // 노드 설정
{
	p->age = age;
	strcpy_s( p->name, name );
}

void Insert( People* current, People* newnode ) // 첫 노드 다음에 삽입
{
	People* prenode = current->next;
	current->next = newnode;
	newnode->next = prenode;
}

void deletePeople( People* p ) // 리스트 삭제
{
	People* current = new People;
	while ( current != nullptr )
	{
		People* next = new People;
		delete p;
		current = next;
	}
}



void main( )
{
	headnode = Create( );

	setPeople( headnode, 1, "first node" );

	People* newnode = Create( );
	setPeople( newnode, 2, "second node" );
	Insert( headnode, newnode );

	newnode = Create( );
	setPeople( newnode, 3, "third node" );
	Insert( headnode, newnode );

	newnode = Create( );
	setPeople( newnode, 4, "fourth node" );
	Insert( headnode, newnode );

	newnode = Create( );
	setPeople( newnode, 5, "fifth node" );
	Insert( headnode, newnode );

	printPeople( headnode );
	// 1 5 4 3 2

	deletePeople( headnode );
}
