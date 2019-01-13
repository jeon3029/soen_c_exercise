#include <stdio.h>
#include <stdarg.h>
void outsum(char *,...);
void main()
{
outsum("1+2 = %d\n",1,2,0); //�ǳ��� 0�� ���̶�� ���̴�.
outsum("1+2+3+4 = %d\n",1,2,3,4,0);
outsum("1~10 = %d\n",1,2,3,4,5,6,7,8,9,10,0);
}
void outsum(char *msg,...) {
int sum=0,arg;
va_list ap;
va_start(ap,msg);        /* ���� �μ��� �б� ���� �غ� */
while ((arg=va_arg(ap,int))!=0)  /* �μ��� �ϳ��� ���� */
  sum+=arg;          
printf(msg,sum);     
va_end(ap);
}