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
    printf("\n[������I�����Ă�������]\n");
  	Sleep(100);
  	printf("�P�F����Ǘ�\n");
  	Sleep(100);
  	printf("�Q�FDVD�Ǘ�\n");
  	Sleep(100);
  	printf("�R�F�ݏo����\n");
  	Sleep(100);
  	printf("�S�F�ԋp����\n");
  	Sleep(100);
  	printf("�T�F�������\n");
  	Sleep(100);
  	printf("�U�F���ݏ�\n");
  	Sleep(100);
  	printf("�V�F�I��\n\n");
  	Sleep(100);
  	printf("�ԍ������===>");
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
