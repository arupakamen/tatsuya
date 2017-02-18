#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"
void userManeger(void)
{
	int num;

		system("cls");
		printf("[‰ïˆõŠÇ—]\n");
		printf("‚PF“o˜^\n");
		printf("‚QFíœ\n");
		printf("‚RFDATA•\Ž¦\n\n\n");
		printf("”Ô†‚ð“ü—Í===>");
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
