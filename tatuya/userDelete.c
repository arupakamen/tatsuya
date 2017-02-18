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

  printf("[会員管理：削除]\n");
  printf("会員ID：");
  scanf("%s", keyword);
  fpr = fopen("USER_DATA.csv", "r");
  while (fscanf(fpr,"%[^,],%[^,],%[^,],%[^,],%[^,],%s\n",id,name,post,live,number,birth) != EOF) {
    if (strcmp(keyword,id) == 0) {
      printf("氏名：%s\n郵便番号：%s\n住所：%s\n電話番号：%s\n生年月日：%s\n",name,post,live,number,birth);
      break;
    }
  }
  fclose(fpr);
  printf("\n");

  printf("削除しますか？(y/n)：");
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
    printf("削除しました。\n\n");
  }
  if (select[0] == 'n' || select[0] == 'N') {
    printf("削除しませんでした。\n\n");
  }


  printf("続行するには何かキーを押してください. . .");
  kbhit();
  getch();





}
