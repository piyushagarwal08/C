#include<stdio.h>
#include<conio.h>
void main()
{
	//clrscr();
	int i,j,n,a[100],key;
	printf("enter the size of your array : ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the array data : ");
		scanf("%d", &a[i]);
	}
	
	for(j=1;j<n;j++)
	{
		key = a[j];
		
		i = j-1 ;
		while (i>=0 && a[i]>key)
		{
			a[i+1] = a[i];
			i = i-1;
			a[i+1] = key ;
        } 
	}
	printf("the sorted array is : ");
	for(i=0;i<n;i++)
	{
	
		printf("%d", a[i]);
	}
	getch();
}
