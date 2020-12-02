#include<stdio.h>
int main()
{
	int seconds,minutes,hours;
	printf("请输入秒数\n");
	scanf("%d",&seconds);
	minutes=seconds/60;
	hours=seconds/3600;
	seconds=seconds%60;
	if(seconds<10){
		if(minutes<10&&hours<10){
			printf("0%d:0%d:0%d\n",hours,minutes,seconds);
		}
		else if(minutes>=10){
			if(hours<10){
				printf("0%d:%d:0%d\n",hours,minutes,seconds);
			}
			else{
				printf("%d:%d:0%d\n",hours,minutes,seconds);
			}
		}
	}
	else{
		if(minutes<10&&hours<10){
			printf("0%d:0%d:%d\n",hours,minutes,seconds);
		}
		else if(minutes>=10){
			if(hours<10){
				printf("0%d:%d:%d\n",hours,minutes,seconds);
			}
			else{
				printf("%d:%d:%d\n",hours,minutes,seconds);
			}
		}
	}
	return 0;
}
