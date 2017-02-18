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

  printf("[DVD管理・削除]\n");
  printf("DVDID：");
  scanf("%s", keyword);
  fpr = fopen("DVD_DATA.csv", "r");
  while (fscanf(fpr,"%[^,],%s\n",id,title) != EOF) {
    if (strcmp(keyword,id) == 0) {
      printf("DVDタイトル：%s\n\n", title);
      break;
    }
  }
  fclose(fpr);

  printf("削除しますか？？(y/n)：");
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
    printf("削除しました。\n\n");
  }
  if (select[0] == 'n' || select[0] == 'N') {
    printf("削除しませんでした。\n\n");
  }

  printf("続行するには何かキーを押してください. . .");
  kbhit();
  getch();

}
