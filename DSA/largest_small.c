#include<stdio.h>

int main()
{
int a[50],i,n,l,s;
printf("enter n");
scanf("%d",&n);
printf("Input array elements : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

l=s=a[0];

for(i=1;i<n;i++)
{
if(a[i]>l)
l=a[i];

if(a[i]<s)
s=a[i];
}

printf(" smallest is %d\n",s);
printf(" largest is %d\n",l);

return 0;
}
