#include<stdio.h>
int main()
{
	int w;
    printf("大学查询\n");
	printf("请输入一个1~20之间的数字\n");
	scanf("%d",&w);
	switch(w)
	{
	    case 1:printf("清华大学\n");break;
	    case 2:printf("北京大学\n");break;
		case 3:printf("复旦大学\n");break;
		case 4:printf("浙江大学\n");break;
		case 5:printf("南京大学\n");break;
		case 6:printf("上海交通大学\n");break;
		case 7:printf("武汉大学\n");break;
		case 8:printf("华中科技大学\n");break;
		case 9:printf("吉林大学\n");break;	
		case 10:printf("南开大学\n");break;
		case 11:printf("中国人民大学\n");break;
		case 12:printf("四川大学\n");break;
		case 13:printf("中山大学\n");break;
		case 14:printf("西安交通大学\n");break;
		case 15:printf("中南大学\n");break;
		case 16:printf("哈尔滨工业大学\n");break;
		case 17:printf("中国科技大学\n");break;
		case 18:printf("山东大学\n");break;
		case 19:printf("天津大学\n");break;
		case 20:printf("北京师范大学\n");break;
	    default:printf("*** University\n");
	}
	return 0;
}
