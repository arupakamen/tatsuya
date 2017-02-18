#include <stdio.h>
#include <windows.h>
#include "TATSUYA.h"

void dvdRegistraition(void){
  FILE *fp;
  char id[6];
  char title[100];
  char select[2];

  printf("[DVD管理・登録]\n");
  printf("DVDID：");
  scanf("%s",id);
  printf("DVDタイトル：");
  scanf("%s",title);


//  fflush(stdin);
  printf("\n追加しますか？ (y/n)：");
  scanf("%s",select);
  if(select[0] == 'y' || select[0] == 'Y') {
    fp  = fopen("DVD_DATA.csv", "a");
    fprintf(fp, "%s,%s\n",id,title);
    printf("追加しました\n\n");
    fclose(fp);
  }
  if(select[0] == 'n' || select[0] == 'N') {
    printf("追加しませんでした。\n\n");
  }

  printf("続行するには何かキーを押してください. . .");
  kbhit();
  getch();

}
