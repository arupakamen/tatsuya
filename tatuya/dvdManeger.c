#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"

void dvdManeger(void)
{
  int num;
  system("cls");
  printf("[DVD�Ǘ�]\n");
  printf("�P�F�ǉ�\n");
  printf("�Q�F�폜\n");
  printf("�R�FDATA�\��\n\n");
  printf("�ԍ������===>");
  scanf("%d",&num);
  printf("\n");

  switch(num) {
    case 1:
      dvdRegistraition();
      break;
    case 2:
      dvdDelete();
      break;
    case 3:
      dvdDisplay();
      break;
  }
}
