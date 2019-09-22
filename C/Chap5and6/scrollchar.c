#include<Turboc.h>
void main()
{
	int i;
	clrscr();
	for(i=1;;i++)//screen starts from 1,10 not 0,10
	{
		gotoxy(i,10);
		if((i-1)%7==0){
			//printf("O");
			printf("O");
			fflush(stdout);
		}
		else{
			//printf(".");
			printf(".");
			fflush(stdout);
		}
		//fflush(stdout);
		usleep(200000);//0.2 seconds
		//usleep(200(miliseconds) * 1000);
	}
}
