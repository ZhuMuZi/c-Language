#include<stdio.h>
int main()
{
    int a,b,c;
	printf("请输入三个数字(如：1 2 3)\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		if(b>c){
		printf("%d\n%d\n%d\n",a,b,c);
		}
		else{
		printf("%d\n%d\n%d\n",a,c,b);
		}
	}
	if(b>a&&b>c){
		if(a>c){
		printf("%d\n%d\n%d\n",b,a,c);
		}
		else{
		printf("%d\n%d\n%d\n",b,c,a);
		}
	}
	if(c>a&&c>b){
		if(a>b){
		printf("%d\n%d\n%d\n",c,a,b);
		}
		else{
		printf("%d\n%d\n%d\n",c,b,a);
		}
	}
	return 0;
}
