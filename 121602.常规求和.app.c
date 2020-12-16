#include<stdio.h>
int main()
{
	int x;
	int y=0;
	printf("请输入一个大于0的数\n");
	while(1){
	scanf("%d",&x);
	if(x<=0){
		printf("错误，请输入一个大于0的数\n");
	}
	else {
		for(x;x>=0;x--){
		  y=y+x;
		}
	}
	printf("%d\n",y);
	y=0;
	printf("\n");
	}
	return 0;
}
