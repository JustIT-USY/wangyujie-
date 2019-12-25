
#include<stdio.h>
#define N 8
void main()
{
	int i,j,k,t,a[N];
	printf("\n输入N个待排序的数据:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		k=i;
	    for(j=i+1;j<N;j++)
		if(a[k]>a[j]) k=j;
		t=a[i]; a[i]=a[k]; a[k]=t;
	
	}
	for(i=0;i<N;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
}


