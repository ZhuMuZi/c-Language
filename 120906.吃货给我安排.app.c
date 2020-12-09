#include <stdio.h>
#include<string.h>
int main()
{
	char a[]="春节";
	char b[]="端午节";
	char c[]="中秋节";
	char d[]="元宵节";
	char e[100];
	printf("欢迎来到吃货小程序\n");
	scanf("%s",&e);
	if(strcmp(a,e)==0){
		printf(" 给我安排饺子\n");
	}
    else if(strcmp(b,e)==0){
		printf("给我安排粽子\n");
	}
    else if(strcmp(c,e)==0){
		printf("给我安排月饼\n");
	}
    else if(strcmp(d,e)==0){
		printf("给我安排元宵\n");
	}
	else{
		printf("？？？\n");
	}
	return 0;
}
