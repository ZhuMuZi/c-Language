#include<stdio.h>
int main()
{
	int b,c;
	int a2d[2][3]={
		{1,2,3},
		{4,5,6}
	};
	for(b=0;b<2;b++){
		for(c=0;c<3;c++){
			printf("%d",a2d[b][c]);
		}
		printf("\n");
	}
	return 0;
}
