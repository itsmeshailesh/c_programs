#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) 
{
	//pass 3 value
	int a,b,c,n,i;
		n=argc;
	printf("%d",n);
	
	for(i=1; i<n; i++)
		c=c+ atoi(argv[i]);
		
	printf("%d",c);
	
	
	return 0;
}
