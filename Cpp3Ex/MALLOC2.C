#include <graphics.h>
#include <alloc.h>
#include <conio.h>
void main()
{
int gd=0,gm;
int i;
unsigned size;
void *imagebuf;
initgraph(&gd,&gm,"");
for (i=0;i<400;i+=10)                // ��� ȭ���� �׸�
   line(0,200,639,i);
getch();
size=imagesize(400,150,500,250);
imagebuf=malloc(size);
getimage(400,150,500,250,imagebuf);// ȭ���� ���� ������ 
                                   // �̹����� �����Ѵ�.
setfillstyle(1,0);
bar3d(400,150,500,250,0,1);     // ������ �Ϻθ� �����.
for (i=150;i<250;i+=5) //���� �Ϻθ� �ٸ� ������ ����Ѵ�.
  line(400,200,500,i);
getch();
putimage(400,150,imagebuf,COPY_PUT); // ������Ų��.
getch();
free(imagebuf);
closegraph();
}