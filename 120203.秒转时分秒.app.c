#include<stdio.h>
int main()
{
	int s,min,h;
	printf("请输入秒数\n");
	scanf("%d",&s);
	min=s/60;
	h=s/3600;
	s=s%60;
	printf("%.2d:%.2d:%.2d\n",h,min,s);
	return 0;
}
