#include <dos.h>
void interrupt (*oldhandler)(...);     // ���� ISR ����
void interrupt handler(...)     // �� �Լ��� ���ο� ISR    
{
static int count;
count++;
count %=10;
  poke(0xb800,80*2*11-2,0x7900+count+'0');
oldhandler();
}
void main(void)
{
oldhandler=getvect(0x1c);
setvect(0x1c,handler);          // ���ͷ�Ʈ ����
keep(0,(_SS+(_SP>>4)-_psp));    // ���� ����
}