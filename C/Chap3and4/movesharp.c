#include <Turboc.h>
#include<stdio.h>
#include<ncurses.h>
/*
	 gcc options : -lncurses
	 Have some problems. : does not deleted the ^A[[ and q and Q doesn't work.
	 I think ncurses makes problem.
	 But I don't know why
	 2019 02 23

	 -- if I find similar thing I will fix this.

	 */
void main()
{
	int x,y;
	int ch;
	x=40;
	y=10;
	initscr();
	//clrscr();
	//fflush(stdout);
	//fflush(stdin);
	//while(getch()!='\n'){}
	//ch=getch();
	//if(ch==-1)printf("sdsd\n");
	//if(ch=='\n')printf("aaa\n");
	//printf("%d\n",ch);
//	printf("%d\n",KEY_RIGHT);
	
	for(;;) {
		gotoxy(x,y);
		putchar('#');
		ch=getch();
		if (ch != EOF) {
		switch (ch) {
			case 'D':
				//printf("left");
		    getch();
		    getch();
				x=x-1;
			//	fflush(stdin);
			//	fflush(stdout);
				break;
			case 'C':
				//printf("right");
		    getch();
		    getch();
				x=x+1;
			//	fflush(stdin);
			//	fflush(stdout);
				break;
			case 'A':
				//printf("up");
		    getch();
		    getch();
				y=y-1;
			//	fflush(stdin);
			//	fflush(stdout);
				break;
			case 'B':
				//printf("down");
				y=y+1;
		    getch();
		    getch();
		//		fflush(stdin);
			//	fflush(stdout);
				break;
			default:
				//printf("default");
				//printf("%d",ch);
				break;
		 }

		} else {

			switch (ch) {
			  case ' ':
			   clrscr();
			   break;
			  case 'q':
			  case 'Q':
			   exit(0);
			  }
			}
	}
	wclear(stdscr);
	endwin();
}
