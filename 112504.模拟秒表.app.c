#include<stdio.h>
#include<windows.h>
int main()
{	
	int a;
	int m=2147483647;
	for(a=1;a<=m;a++){
                Sleep(1000);
		printf("现在是%d秒\n",a);
	}
	return 0;

}
