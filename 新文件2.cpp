#include<stdio.h>
#include<stdlib.h> 

void max(int);

int main()
{
	int a[10];
	for(int i=1;i<10;i++)
	{
		scanf("%d\n",&a[i]);
		max(a[i]);
	}
	printf("%d",max);
	system("pause");
	return 0;
}

void max(int a[])
{
	int max=0;
	if(a[]>max)
	max=a[];
}
