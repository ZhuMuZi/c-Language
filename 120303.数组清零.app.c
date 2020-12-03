#include<stdio.h>
#include<windows.h>
int main()
{
	int b,c;
	int a2d[20][10]={
		{0,1,2,3,4,5,6,7,8,9},
	};
	for(b=0;b<20;b++){
		for(c=0;c<10;c++){
			a2d[b][c]=999;
			printf("%d ",a2d[b][c]);
		}
		printf("\n");
	}
	printf("\n");
	Sleep(5000);
	for(b=0;b<20;b++){
		for(c=0;c<10;c++){
			a2d[b][c]=0;
			printf("%d ",a2d[b][c]);
		}
		printf("\n");
	}

	return 0;
}
