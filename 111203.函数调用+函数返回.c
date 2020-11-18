#include<stdio.h>
int a(int b,int c)
{
	return b+=c;
}
int main()
{

	printf("%d\n",a(10,5));
	return 0;
}

