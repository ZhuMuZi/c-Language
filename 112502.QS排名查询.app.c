#include<stdio.h>
int main()
{	
	int i;
	scanf("%d",&i);
	if(i==1){
		printf("清华大学\n");
	}
	else if(i==2){
		printf("北京大学\n");
	}
	else if(i==3){
		printf("浙江大学\n");
	}
	else if(i==4){
		printf("上海交通大学\n");
	}
	else if(i==5){
		printf("复旦大学\n");
	}
	else if(i==6){
		printf("中国科学技术大学\n");
	}
	else if(i==7){
		printf("华中科技大学\n");
	}
	else if(i==8){
		printf("南京大学\n");
	}
	else if(i==9){
		printf("中山大学\n");
	}
	else if(i==10){
		printf("哈尔滨工业大学\n");
	}
	else{
		printf("老铁的排名太靠后了，请输入1-10\n");
	}
	return 0;
}
