//pattern
#include<stdio.h>
int main ()
{
 int i,j,k,n;


printf("enter no. of row " );
scanf("%d",&n);

for (i=1; i<=n; i++)
{
	for(j=n; j>i; j--)
	{
	  printf(" ");
	}

	for (j=1; j<=(2*i-1); j++)
	{
	  printf("*");
	}
printf("\n");

}
return 0;



}
