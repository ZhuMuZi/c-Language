#include<stdio.h>
int main()
{
	char w;
	printf("请输入wasd中任意一个字母\n");
	scanf("%c",&w);
	switch(w)
	{
	    case 'w':printf("你在点击上键\n");break;
	    case 'a':printf("你在点击左键\n");break;
		  case 's':printf("你在点击下键\n");break;
		  case 'd':printf("你在点击右键\n");break;
	    default:printf("*** University\n");
	}
	return 0;
}
