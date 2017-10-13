#include<stdio.h>
int main()
{
int n,m,i;
printf("enter two limits");
scanf("%d %d",&n,&m);
for(i=n;i<m;i++)
{
if(i%2==0)
printf("%d",i);
}
return 0;
}
