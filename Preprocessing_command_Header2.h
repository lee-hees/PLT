
// 단 한 번만 호출된다
// 여러 군데에서 헤더파일이 호출되어도
// 한 번만 호출된다
#ifndef HEADER2
#define HEADER2

// .cpp 파일에서 이미 호출되어
// 아래의 전처리 호출은 실행되지 않는다
#include "Processing_command_Header1.h"

struct Test2
{
	Test1 test1;
};

#endif