include<stdio.h>
int main()
{
	int n,a[10],i;
	int max;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elments");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("the maximum number is %d\n",max);
	return max;
}
