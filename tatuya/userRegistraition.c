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

  printf("\n[����Ǘ��E�o�^]\n");

  printf("���ID�F");
  scanf("%s",id);
  printf("�����F");
  scanf("%s",name);
  printf("�X�֔ԍ��F");
  scanf("%s",post);
  printf("�Z���F");
  scanf("%s",live);
  printf("�d�b�ԍ��F");
  scanf("%s",number);
  printf("���N�����F");
  scanf("%s",birth);

  fflush(stdin);
  printf("\n�o�^���܂����H (y/n)");
  scanf("%s",select);

  if(select[0] == 'y' || select[0] == 'Y') {
    fp  = fopen("USER_DATA.csv", "a");
    fprintf(fp, "%s,%s,%s,%s,%s,%s\n",id,name,post,live,number,birth);
    printf("�o�^���܂���\n\n");
    fclose(fp);
  }
  if(select[0] == 'n' || select[0] == 'N') {
    printf("�o�^���܂���ł����B\n\n");
  }


  printf("���s����ɂ͉����L�[�������Ă�������. . .");
  kbhit();
  getch();

}
