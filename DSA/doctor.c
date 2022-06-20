#include<stdio.h>
int main()
{
	int np,time,time_pat;
	printf("enter the no of patients");
	scanf("%d",&np);
	printf("enter the time taken for patients");
	scanf("%d",&time_pat);
	time=(np-1)*(20-time_pat);
	printf("time left= %d ",time);
	return 0;	
}
