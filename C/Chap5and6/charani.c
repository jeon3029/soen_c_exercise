#include <Turboc.h>
void main()
{
     int i;
		 clrscr();
     for (i=1;i<=75;i=i+1) {
          gotoxy(i,10);
          if (i%2 == 0) {
              puts(" __@");
          } else {
              puts(" ^^@");
          }
          //delay(100); // doesn't work at x86_64 condition
					sleep(1);
     }
}
