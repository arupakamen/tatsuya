#include <stdio.h>
#include <windows.h>
#include "TATSUYA.h"

void dvdRegistraition(void){
  FILE *fp;
  char id[6];
  char title[100];
  char select[2];

  printf("[DVD�Ǘ��E�o�^]\n");
  printf("DVDID�F");
  scanf("%s",id);
  printf("DVD�^�C�g���F");
  scanf("%s",title);


//  fflush(stdin);
  printf("\n�ǉ����܂����H (y/n)�F");
  scanf("%s",select);
  if(select[0] == 'y' || select[0] == 'Y') {
    fp  = fopen("DVD_DATA.csv", "a");
    fprintf(fp, "%s,%s\n",id,title);
    printf("�ǉ����܂���\n\n");
    fclose(fp);
  }
  if(select[0] == 'n' || select[0] == 'N') {
    printf("�ǉ����܂���ł����B\n\n");
  }

  printf("���s����ɂ͉����L�[�������Ă�������. . .");
  kbhit();
  getch();

}
