#include<stdio.h>
int main()
{
	int a;
	printf("输入1或0\n");
	scanf("%d",&a);
	if(a==1){
		printf("男\n");
	}
	else if(a==0){
		printf("女\n");
	}
	else {
		printf("输入有误，请重新输入\n");
	}
	return 0;
}
