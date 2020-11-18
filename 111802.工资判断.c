#include<stdio.h>
int main()
{
 int a;
 printf("【打工人工资等级划分】\n");
 printf("请输入工资：\n");
 scanf("%d",&a);
 if(a<0){
	 printf("你还有花呗没还，无法使用该程序。\n");
 }
 else if(a>=0&&a<=500){
	printf("赤贫\n");
	}
 else if(a>=501&&a<=1500)
 {
	 printf("贫困\n");
 }
 else if(a>=1501&&a<=3000){
	 printf("普通打工人\n");
 }
 else if(a>=3001&&a<=5000){
	 printf("普通清洁工\n");
 }
 else if(a>=5001&&a<=12000){
	 printf("水电工工资\n");
 }
 else if(a>=12001&&a<=50000){
	 printf("脑袋大脖子粗不是老板就是伙夫\n");
 }
 else {
	 printf("程序员\n");
 }
 return 0;
}
