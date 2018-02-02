#include <stdio.h>
int main()
{
int re,rn=0,n,orgn;
printf("enter the num");
scanf("%d",&n);
	orgn=n;
while(n!=0)
{
	re=n%10;
	rn=rn*10+re;
	n=n/10;
	if(orgn==rn)
{
	printf("yes");
}
	else
{
	printf("num");
}
}
}
