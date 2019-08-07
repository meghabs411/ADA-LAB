#include<stdio.h>
int main()
{
	int n,i,k,t,a[10];
	printf("enter the test case");
	
	scanf("%d",&t);
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the key element");
	scanf("%d",&k);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
		{
	          printf("element present 1");
			  return 0;
	}
	}
	  
		      printf("element not present-1");
		
	}


