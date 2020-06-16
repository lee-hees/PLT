#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Sum( int a, int b )
{
	return a + b;
}

typedef int( *FP )( int a, int b );


int Greater( int a, int b )
{
	return a > b;
}

int Litter( int a, int b )
{
	return a < b;
}

typedef int( *Compare )( int a, int b );

//void Sort( int arr[ 5 ] )
void Sort( int* arr, Compare compare )
{
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = i; j < 5; j++ )
		{
			if ( compare( arr[ i ], arr[ j ] ) )
			{
				int temp = arr[ i ];
				arr[ i ] = arr[ j ];
				arr[ j ] = temp;
			}
		}
	}
}

void main( )
{
	// 함수 포인터 선언 및 사용

	//int (*FP)( int a, int b );
	FP fp;
	fp = Sum;

	int a = Sum( 2, 3 );
	printf( "%i\r\n", a );

	a = fp( 2, 3 );
	printf( "%i\r\n", a );

	printf( "\r\n" );


	// 함수 포인터 실제 응용 사례

	int arr[ 5 ] = { 5, 1, 9, 3, 7 };

	Sort( arr, Greater );
	for ( int i = 0; i < 5; i++ ) { printf( "%i ", arr[ i ] ); }

	printf( "\r\n" );

	Sort( arr, Litter );
	for ( int i = 0; i < 5; i++ ) { printf( "%i ", arr[ i ] ); }

}
