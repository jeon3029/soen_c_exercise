#include<Turboc.h>
#include<inttypes.h>
void main()
{
	uint64_t a,b,c;
	//__int64 a,b,c; //available in C++
	a= 111111111;
	b= 111111111;
	c= a*b;
	printf("%" PRIu64 "\n",c);
	//printf("%"PTId64 "\n",c); //for int64_t
	return;

}
