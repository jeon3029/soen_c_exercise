#include<Turboc.h>
int main(void)
{
	double PI = 3.14;
	printf("-->%f<--\n",PI);//printing 6 digit under dot.
	printf("-->%10f<--\n",PI);//occupy 10 spaces and print %f
	printf("-->%.2f<--\n",PI);//printf 2 digit under dot.
	printf("-->%10.2f<--\n",PI);//occupy 10 spaces and print 2digit under dot.
	printf("-->%010.2f<--\n",PI);//occupy 10 spaces and print %.2f(previous spaces is printed as 0
	printf("-->%-10.2f<--\n",PI);//print left side
	return 0;
}
