#include<stdio.h>
int main()
{	
	int wage;
	printf("打工人工资判断程序\n");
	scanf("%d",&wage);
	if(wage>=0&&wage<=100){
		printf("贫困打工人\n");
	}
	else if(wage>=101&&wage<=1000){
		printf("一般打工人\n");
	}
	else if(wage>=1001&&wage<=20000){
		printf("土豪打工人\n");
	}
	else {
		printf("其他，输入有误，请重新输入\n");
	}
	return 0;
}
