#include <dir.h>
#include <dos.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
struct ffblk exe;      // file�˻��� ���� ����ü ����
int flag;              // �˻� ��� ����
int total=0;           // �� �˻��� file�� ����
flag=findfirst("*.exe",&exe,~FA_HIDDEN);
if (flag==-1) {        // file�� �ϳ��� ���� ���
  printf("EXE file Not found !!  Merong! \n");
  exit(0);
  }
printf ("\nEXE file finder\n\n");
while (!flag) {        // ���̻� ���� ������ ��� ã��
  total++;
  printf("%s\n",exe.ff_name);
  flag=findnext(&exe);     // ���� file�� ã��
  }
printf("\ntotal EXE file is %d files\n",total);
}