#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],pro,main_pro,i,j,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			pro=a[i]-a[j];
			if(pro>main_pro)
			{
				main_pro=pro;
			}
		}
	}
	printf("%d\n",main_pro);
	return 0;
}
