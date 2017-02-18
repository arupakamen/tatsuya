#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "TATSUYA.h"
void main(void)
{
  int menuNum;
  int finish = 1;
  while(finish == 1) {
    system("cls");
    logoDisplay();
    printf("\n[ˆ—‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢]\n");
  	Sleep(100);
  	printf("‚PF‰ïˆõŠÇ—\n");
  	Sleep(100);
  	printf("‚QFDVDŠÇ—\n");
  	Sleep(100);
  	printf("‚RF‘Ýoˆ—\n");
  	Sleep(100);
  	printf("‚SF•Ô‹pˆ—\n");
  	Sleep(100);
  	printf("‚TF‰ïˆõ—š—ð\n");
  	Sleep(100);
  	printf("‚UFŒ»Ýó‹µ\n");
  	Sleep(100);
  	printf("‚VFI—¹\n\n");
  	Sleep(100);
  	printf("”Ô†‚ð“ü—Í===>");
  	Sleep(100);
    scanf("%d",&menuNum);
    switch(menuNum) {
      case 1:
        userManeger();
        break;
      case 2:
        dvdManeger();
        break;
      case 3:
        dvdRental();
        break;
      case 4:
        dvdReturn();
        break;
      case 5:
        userHistory();
        break;
      case 6:
        nowRental();
        break;
      case 7:
          finish = 0;
      }
    }
  }
