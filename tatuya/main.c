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
    printf("\n[処理を選択してください]\n");
  	Sleep(100);
  	printf("１：会員管理\n");
  	Sleep(100);
  	printf("２：DVD管理\n");
  	Sleep(100);
  	printf("３：貸出処理\n");
  	Sleep(100);
  	printf("４：返却処理\n");
  	Sleep(100);
  	printf("５：会員履歴\n");
  	Sleep(100);
  	printf("６：現在状況\n");
  	Sleep(100);
  	printf("７：終了\n\n");
  	Sleep(100);
  	printf("番号を入力===>");
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
