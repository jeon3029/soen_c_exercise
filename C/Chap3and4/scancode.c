#include <Turboc.h>
//This doesn't work in linux condition
void main()
{
	int ch;
	for(;;) {
		ch=getch();
		if (ch == 0xE0 || ch == 0) {
			ch=getch();
			printf("확장 키 입력, 코드 = %d\n",ch);
		} else {
			printf("일반 문자 입력, 문자 = %c, 코드 = %d\n",ch,ch);
			if (ch == 'q') exit(0);
		}
	}
}
