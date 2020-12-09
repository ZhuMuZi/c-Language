#include <stdio.h>
#include<string.h>
int main()
{
	char a1[]="下午好";
	char a2[]="中午好";
	if(strcmp(a1,a2)==0){
	   printf("相同\n");
	}
	else{
		printf("不相同\n");
	}
	return 0;
}
