#include<stdio.h>
int main()
{
	int  a[100],i,j,min,index,n,t;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n number in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=a[i];
		index=i; 
	    for(j=i+1;j<n;j++)
	{
		if(a[j]<min)
		  {
		  	min=a[j];
		  	index=j;
	   }
	}
		  t=a[i];
		  a[i]=a[index];
		  a[index]=t;
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
