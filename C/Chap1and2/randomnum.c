#include<Turboc.h>
void main()
{
	int n;
	int randN;
	randomize();
	randN=random(100);
	while(1){
		printf("0~99사이의 숫자를 맞춰보세요\n");
		scanf("%d",&n);
		if(randN>n)
			printf("그 수보다 큽니다.\n");
		else if(randN<n)
			printf("그 수보다 작습니다.\n");
		else {
			printf("맞췄습니다!\n");
			break;
		}
	}
	return;
}
