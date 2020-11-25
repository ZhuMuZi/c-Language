#include<stdio.h>
int main()
{  
	printf("猜数字游戏开始啦\n");
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
	return 0;

}
