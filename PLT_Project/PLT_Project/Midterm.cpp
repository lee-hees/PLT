// printf. scanf_s 사용
#include <stdio.h>

// strlen 으로 문자열 길이 사용
#include <string.h>



// 과제 종류 1의 '*' 대신 학번 출력하는 함수
void print_stud_num(char* stud_num, int* index_of_stud_num)
{
	// 인덱스에 의해 (숫자인)문자 1개 출력
	printf("%c", stud_num[*index_of_stud_num]);

	// 학번이 반복되도록 마지막 숫자가 출력된 후 0번째 인덱스로 되돌림
	// 그 외에는 인덱스를 한 칸씩 뒤로 이동
	*index_of_stud_num = (*index_of_stud_num + 1) % strlen(stud_num);
}

int main()
{
	// 실행 시 입력되는 숫자 - 짝수. 홀수. 0 을 구분
	int n = 0;

	// 학번을 저장한 문자열
	char* stud_num = "20161620";

	// 출력에 사용될 인덱스 -- 수정할 수 있도록 변수로 지정
	int index_of_stud_num = 0;

	// 초기 실행을 위한 프린트.스캔
	printf("Enter number: ");
	scanf_s("%i", &n);

	// 0이면 종료. 그 외에는 계속 반복
	while (n != 0)
	{
		// 짝수가 아닌.홀수면 실행 --> 짝수인 경우 다시 입력 
		if (n % 2 != 0)
		{
			// 높이 == n
			for (int i = 0; i < n; i++)
			{
				// 중간 보다 위
				if (i < (n / 2))
				{
					// 최대 폭 == n
					for (int j = 0; j < n; j++)  {
						// * 의 왼쪽 조건
						if (j < (n / 2) - i)
						{
							printf(".");
						}
						// * 의 오른쪽 조건
						else if (j >(n / 2) + i)
						{
							printf(".");
						}
						// 그 외에는 학번을 출력 --> 함수 호출
						else
						{
							print_stud_num(stud_num, &index_of_stud_num);
						}
					}
					// 한 줄이 출력되면 개행
					printf("\r\n");
				}
				// 중간 보다 아래
				else if (i > (n / 2))
				{
					// 최대 폭 == n
					for (int j = 0; j < n; j++)
					{
						// * 의 왼쪽 조건
						if (j < (i - (n / 2)))
						{
							printf(".");
						}
						// * 의 오른쪽 조건
						else if (j >(n - 1) - (i - (n / 2)))
						{
							printf(".");
						}
						// 그 외에는 학번을 출력 --> 함수 호출
						else
						{
							print_stud_num(stud_num, &index_of_stud_num);
						}
					}
					// 한 줄이 출력되면 개행
					printf("\r\n");
				}
				// 중간 --> '.' 없이 학번만 출력
				else
				{
					// 최대 폭 == n
					// 학번 출력하는 함수. 호출만
					for (int j = 0; j < n; j++)
					{
						print_stud_num(stud_num, &index_of_stud_num);
					}
					// 한 줄이 출력되면 개행
					printf("\r\n");
				}
			}
		}

		// 0이 아닌 입력의 처리 진행이 끝난 후, 인덱스를 첫 문자를 가리키도록 함
		index_of_stud_num = 0;

		// 0이 아닌 입력의 처리 진행이 끝난 후, 입력을 다시 받아야 함
		printf("Enter number: ");
		scanf_s("%i", &n);
	}

	// 반복문 종료 후, 프로그램 종료
	return 0;
}