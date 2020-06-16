#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "Processing_command_Header1.h"
#include "Processing_command_Header2.h"

// 매크로
#define PI 3.1415 

// 매크로 함수
#define aMAX(a,b)	a > b ? a : b
#define bMAX(a,b)	((a) > (b) ? (a) : (b)) 

// 디버그 확인용 매크로
#define DEBUG

// 연결 매크로
#define CONCAT(a,b)	a##b
 
// 함수
void Test( )
{
	// 현재 함수 확인
	printf( "%s\r\n", __FUNCTION__ );
}

void main( )
{

#ifdef DEBUG
	printf( "%g\r\n", PI + 100 );
#endif

#if defined(_DEBUG)
	printf( "디버그\r\n" );
#endif

#if defined(NDEBUG)
	printf( "릴리즈\r\n" );
#endif

	printf( "\r\n" );

	printf( "%i\r\n", aMAX( 3, 3 > 1 ) );
	// 3 > 3 > 1 ? 3 : 3 > 1
	//     0 > 1 ? 3 : 3 > 1
	//         0 ? 3 : 3 > 1
	//                     1
	printf( "%i\r\n", bMAX( 3, ( 3 > 1 ) ) );
	// ((3) > (3 > 1) ? (3) : (3 > 1))
	// ((3) > (    0) ? (3) : (3 > 1))
	//             1  ? (3) : (3 > 1))
	//				     3

	printf( "\r\n" );

	printf( "%i\r\n", __LINE__ ); // 58번 줄
	printf( "%i\r\n", __LINE__ ); // 59번 줄
	printf( "%i\r\n", __LINE__ ); // 60번 줄

	printf( "\r\n" );

	printf( "%s\r\n", __FUNCTION__ );
	Test( );

	// 연결 매크로 사용
	// 사용 시 사용 리터럴의 타입을 일치시켜야 함
	// 문자열 --> s
	// 정수 --> i
	printf( "%s\r\n", CONCAT( "1", "2" ) );
	printf( "%i\r\n", CONCAT( 1, 2 ) );


}
