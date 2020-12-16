#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个大于0的数\n");
	while(1){
	scanf("%d",&x);
	if(x<=0){
		printf("错误，请输入一个大于0的数\n");
	}
	else {
		x=x*(1+x)/2;
	}
	printf("%d\n",x);
	printf("\n");
	}
	return 0;
}
