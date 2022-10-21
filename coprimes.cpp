#include <stdio.h>
int main ()
{
	int a, b, f, n;
	printf("Enter thetwo numbers");
	scanf("%d%d", &a, &b);
	for(n=1;n<=a;n++)
	{
	
	if(a%n==0 && b%n==0)
	{
		f=n;
	}
}
if(f==1)
{
	printf("The two numbers are coprimes");
}
else
{
	printf("They are not coprimes");
}
return 0;

	
}
