#include <stdio.h>
#include<string.h>
int main()
{
	char a1[]="宝塔镇河妖";
	char a2[10];
	printf("****猜数字游戏****\n");
	printf("口令：天王盖地虎\n");
	gets(a2);
	if(strcmp(a1,a2)==0){
		printf("游戏开始\n");
		while(1)
	{
		int a=65;
		int i;
		printf("猜猜是多少？（提示：0-100）\n");
		scanf("%d",&i);
		if (i==a){
			printf("恭喜你猜对了，答案是65\n");
		}
		else if(i>70){
		printf("猜的太大了\n");
		}
		else if(i<60){
		printf("猜的太小了\n");
		}
		else if(i<=70&&i>=60){
		printf("你离答案更近了\n");
		}
		else{
		printf("太离谱了\n");
		}
	}
	}
	else{
		printf("错误”\n");
	}
	return 0;
}
