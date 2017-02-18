#include <stdio.h>
#include <stdlib.h>
#include "TATSUYA.h"

void dvdManeger(void)
{
  int num;
  system("cls");
  printf("[DVDŠÇ—]\n");
  printf("‚PF’Ç‰Á\n");
  printf("‚QFíœ\n");
  printf("‚RFDATA•\Ž¦\n\n");
  printf("”Ô†‚ð“ü—Í===>");
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
