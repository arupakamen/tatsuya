#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "TATSUYA.h"

void userDelete(void) {
  FILE *fpw, *fpr;
  char keyword[6];
  char id[6];
  char name[11];
  char post[9];
  char live[100];
  char number[12];
  char birth[10];

  char select[2];

  char *str[25]={"USER_DATA.csv","USER.csv"};

  printf("[����Ǘ��F�폜]\n");
  printf("���ID�F");
  scanf("%s", keyword);
  fpr = fopen("USER_DATA.csv", "r");
  while (fscanf(fpr,"%[^,],%[^,],%[^,],%[^,],%[^,],%s\n",id,name,post,live,number,birth) != EOF) {
    if (strcmp(keyword,id) == 0) {
      printf("�����F%s\n�X�֔ԍ��F%s\n�Z���F%s\n�d�b�ԍ��F%s\n���N�����F%s\n",name,post,live,number,birth);
      break;
    }
  }
  fclose(fpr);
  printf("\n");

  printf("�폜���܂����H(y/n)�F");
  scanf("%s", select);

  if (select[0] == 'Y' || select[0] == 'y') {
    fpw = fopen("USER.csv", "w");
    fpr = fopen("USER_DATA.csv", "r");
    while (fscanf(fpr,"%[^,],%[^,],%[^,],%[^,],%[^,],%s\n",id,name,post,live,number,birth) != EOF) {
      if (strcmp(keyword,id) != 0) {
        fprintf(fpw, "%s,%s,%s,%s,%s,%s\n", id,name,post,live,number,birth);
      }
    }

    fclose(fpw);
    fclose(fpr);

    remove(str[0]);
    rename(str[1],str[0]);

    Sleep(10);
    printf("�폜���܂����B\n\n");
  }
  if (select[0] == 'n' || select[0] == 'N') {
    printf("�폜���܂���ł����B\n\n");
  }


  printf("���s����ɂ͉����L�[�������Ă�������. . .");
  kbhit();
  getch();





}
