#include<stdio.h>
int main()
{
	int b,c;
	int i=1;
	int a2d[19][20]={
		{0,1,2,3,4,5,6,7,8,9}
	};
	for(b=0;b<19;b++){
		for(c=0;c<20;c++){
			a2d[b][c]=0;
		    printf("%d ",a2d[b][c]);
		}
		printf("\n");
	}
	printf("\n");
	for(b=0;b<19;b++){
		for(c=0;c<20;c++){
			a2d[b][c]=i;
			printf("%d ",a2d[b][c]);
			i++;
		}
		printf("\n");
	}
	return 0;
}
