#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"
void userManeger(void)
{
	int num;

		system("cls");
		printf("[ουΗ]\n");
		printf("PFo^\n");
		printf("QFν\n");
		printf("RFDATA\¦\n\n\n");
		printf("ΤπόΝ===>");
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
