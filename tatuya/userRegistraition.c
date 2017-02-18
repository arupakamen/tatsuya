#include <stdio.h>
#include <windows.h>
#include "TATSUYA.h"

void userRegistraition(void){
  FILE *fp;
  char select[2];
  char id[6];
  char name[11];
  char post[9];
  char live[100];
  char number[12];
  char birth[10];

  printf("\n[会員管理・登録]\n");

  printf("会員ID：");
  scanf("%s",id);
  printf("氏名：");
  scanf("%s",name);
  printf("郵便番号：");
  scanf("%s",post);
  printf("住所：");
  scanf("%s",live);
  printf("電話番号：");
  scanf("%s",number);
  printf("生年月日：");
  scanf("%s",birth);

  fflush(stdin);
  printf("\n登録しますか？ (y/n)");
  scanf("%s",select);

  if(select[0] == 'y' || select[0] == 'Y') {
    fp  = fopen("USER_DATA.csv", "a");
    fprintf(fp, "%s,%s,%s,%s,%s,%s\n",id,name,post,live,number,birth);
    printf("登録しました\n\n");
    fclose(fp);
  }
  if(select[0] == 'n' || select[0] == 'N') {
    printf("登録しませんでした。\n\n");
  }


  printf("続行するには何かキーを押してください. . .");
  kbhit();
  getch();

}
