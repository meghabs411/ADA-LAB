#include<stdio.h>
int compute()
{
	int n,i,k,a[100];
	
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
	        return 1;  
	    }
	}
		return -1;
	}

     int main()
	 {
		 int testcase,i,temp[100];
		 printf("enter the testcase");
		 scanf("%d",&testcase);
		 for(i=0;i<testcase;i++)
		 {
			 temp[i]=compute();
			 
		 }
	  for(i=0;i<testcase;i++)
	  {
	 
	 
		      printf("%d",temp[i]);
      }

	}
