#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TATSUYA.h"
void dvdDelete(void);

void main(void) {
  dvdDelete();
}

void dvdDelete(void) {
  FILE *fpw,*fpr;
  char id[6];
  char title[100];
  char keyword[6];
  char select[2];

  printf("[DVD�Ǘ��E�폜]\n");
  printf("DVDID�F");
  scanf("%s", keyword);
  fpr = fopen("DVD_DATA.csv", "r");
  while (fscanf(fpr,"%[^,],%s\n",id,title) != EOF) {
    if (strcmp(keyword,id) == 0) {
      printf("DVD�^�C�g���F%s\n\n", title);
      break;
    }
  }
  fclose(fpr);

  printf("�폜���܂����H�H(y/n)�F");
  scanf("%s", select);

  if (select[0] == 'y' || select[0] == 'Y') {
    fpr = fopen("DVD_DATA.csv", "r");
    fpw = fopen("DVD.csv", "w");
    while (fscanf(fpr,"%[^,],%s\n",id,title) != EOF) {
      if (strcmp(keyword,id) != 0) {
        fprintf(fpw, "%s,%s\n", id,title);
      }
    }

    fclose(fpr);
    fclose(fpw);

    remove("DVD_DATA.csv");
    rename("DVD.csv", "DVD_DATA.csv");
    printf("�폜���܂����B\n\n");
  }
  if (select[0] == 'n' || select[0] == 'N') {
    printf("�폜���܂���ł����B\n\n");
  }

  printf("���s����ɂ͉����L�[�������Ă�������. . .");
  kbhit();
  getch();

}
