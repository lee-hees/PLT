#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++){

		// 4��°���� for ��� ����
		if (i == 4){
			printf("\r\n");
			//continue;
			break;
		}

		// n��° �ٿ��� n�� ���
		for (int j = 1; j <= i; j++){
			printf("*");
		}

		printf("\r\n");
	}


	int i = 1;
	while (i <= 10){

		// 4��°���� �� ��� ����
		if (i == 4){
			i++;
			printf("\r\n");
			continue;
		}

		// n��° �ٿ��� n�� ���
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