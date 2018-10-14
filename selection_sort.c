#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[100],min,loc,temp;
	printf("enter the length of array : ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements of the array : ");
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		min = a[i];
		loc = i;
	for(j=i+1;j<=n-1;j++)
	{
		if(min > a[j])
		{
			min = a[j];
			loc = j;
		}
	}
		temp = a[i];
		a[i] = a[loc];
		a[loc] = temp;
	}
	
	printf("\nthe sorted array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	getch();
}
