#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"
void userManeger(void)
{
	int num;

		system("cls");
		printf("[����Ǘ�]\n");
		printf("�P�F�o�^\n");
		printf("�Q�F�폜\n");
		printf("�R�FDATA�\��\n\n\n");
		printf("�ԍ������===>");
		scanf("%d",&num);
		printf("\n");

		switch(num) {
			case 1:
				userRegistraition();
				break;
			case 2:
				userDelete();
				break;
			case 3:
				userDisplay();
				break;
		}
}
