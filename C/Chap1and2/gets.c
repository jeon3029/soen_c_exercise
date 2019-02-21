#include<Turboc.h>
void main(){
	char addr[128];
	printf("print address : ");
//	scanf("%s",addr);
	gets(addr);
	//getch(value); input only one character
	//putch(value); print only one character
	//delay(5000);
	printf("addr = %s\n",addr);

	return;
}

