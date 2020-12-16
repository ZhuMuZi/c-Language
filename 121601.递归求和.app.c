#include<stdio.h>
int a(int x)
{
	if(x<=0){
		return 0;
	}
	return x+a(x-1);
}
int main()
{
	int y;
	while(1){
	scanf("%d",&y);
	if(y<=0){
		printf("错误，请输入一个大于0的数\n");
	}
	else
	{
		printf("%d\n",a(y));
	}
	}
		return 0;
}
