#include <graphics.h>
#include <conio.h>
void main()
{
int 
drawdata[]={140,130,152,120,165,132,162,136,162,144,172,150,
	
	162,158,162,164,172,170,162,178,162,186,172,192,
	
	165,199,165,220,170,220,170,225,180,230,180,260,
	
	152,270,125,260,125,230,135,225,135,220,140,220,140,130
};
int gd=0,gm;
initgraph(&gd,&gm,"");
setfillstyle(9,14);
fillpoly(25,drawdata);
getch();
closegraph();
}
