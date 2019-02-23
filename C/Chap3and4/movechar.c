#include<Turboc.h>
void main()
{
	int i=40;
	clrscr();
  //putchar(67);
  //	fflush(stdout);
	//This program is not complete
	//I want to move # in 0.1 seconds and it doesn't work
	for(i=1; i<=8; i++)
	{
		gotoxy(i,10);
		fflush(stdout);
		//putchar('#');
		printf("%c",'#');
		fflush(stdout);
		gotoxy(i-1,10);
		fflush(stdout);
		//putchar(' ');
		printf("%c",' ');
		fflush(stdout);
		sleep(0.1);
	}
		gotoxy(1,50);
		fflush(stdout);
}
