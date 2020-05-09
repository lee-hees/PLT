#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++){

		// 4번째에서 for 출력 중지
		if (i == 4){
			printf("\r\n");
			//continue;
			break;
		}

		// n번째 줄에서 n개 출력
		for (int j = 1; j <= i; j++){
			printf("*");
		}

		printf("\r\n");
	}


	int i = 1;
	while (i <= 10){

		// 4번째에서 별 출력 안함
		if (i == 4){
			i++;
			printf("\r\n");
			continue;
		}

		// n번째 줄에서 n개 출력
		int j = 1;
		while (j <= i){
			printf("*");

			j++;
		}
		printf("\r\n");
		i++;
	}

	return 0;
}