#include <stdio.h>
#include <stdarg.h>
void vpf(char *fmt, ...)
{
   va_list ap;
   va_start(ap, fmt);    // �����μ��� ���� ���� ����
   vprintf(fmt, ap); // �����μ��� ���� ������ �Ѱ� �ش�.
   va_end(ap);           // �����μ� ��� ��
}
void main(void)
{
vpf("%d %f %s\n",1,3.14,"string");
}