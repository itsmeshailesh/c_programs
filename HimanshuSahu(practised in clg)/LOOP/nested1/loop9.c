//pattern
#include<stdio.h>
int main()
{
 int i,j,n,s;
printf("enter no. of row ");
scanf("%d",&n);
s=1;
for(i=1; i<=n; i++)
	{  
	  for(j=n; j>i; j--)
		{
 			printf(" ");		
	
		}

	for(j=1; j<=i; j++)
	{
		printf("%d",j);
	}

	  printf("\n");
	}

return 0; 
}

