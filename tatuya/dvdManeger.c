#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"

void dvdManeger(void)
{
  int num;
  system("cls");
  printf("[DVDΗ]\n");
  printf("PFΗΑ\n");
  printf("QFν\n");
  printf("RFDATA\¦\n\n");
  printf("ΤπόΝ===>");
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
