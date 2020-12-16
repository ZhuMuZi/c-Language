#include<stdio.h>
int main()
{
	int x,i,a;
	int y=0;
	printf("请输入一个大于0的数\n");
	while(1){
	scanf("%d",&x);
	if(x<=0){
		printf("错误，请输入一个大于0的数\n");
	}
	else {
		for(i=0;i<=x;i++){
		  y=y+i;
	  }
	}
	printf("%d\n",y);
	y=0;
	printf("\n");
	}
	return 0;
}
