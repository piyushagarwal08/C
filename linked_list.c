#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start=NULL;

void insertatbegin()
{
	struct node *new_node, *current;
	int item,data;
	if(new_node==NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	printf("enter data to be added at first location : ");
	scanf("%d",&item);
	new_node->data=item;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{
		new_node->next=start;
		start=new_node;	
	}
}

void end()
{	int item,data;
	struct node *new_node,*current,*temp;
	if(new_node==NULL)
	{
		printf("overflow");
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	printf("enter data to add at end : ");
	scanf("%d", &item);
	new_node->data=item;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{	
		temp=start;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next=new_node;
	}
}

void display()
{
	struct node *new_node;
	printf("\nelements of list : ");
	new_node=start;
	while(new_node!=NULL)
	{
		printf("%d--->",new_node->data);
		new_node=new_node->next;
	}
	printf("NULL");
}

void desired()
{
	int pos,i;
	
	int item,data;
	struct node *new_node,*temp;

	if(new_node==NULL)
	{
		printf("overflow");
	}
	else
	{
		new_node=(struct node*)malloc(sizeof(struct node));
	}
	if(start==NULL)
	{
		start=new_node;
		new_node->next=NULL;
	}
	printf("enter data to be added at desired : ");
	scanf("%d",&item);
	new_node->data=item;
	
	

	
	printf("enter the location of data : ");
	scanf("%d",&pos);
	temp = start;
	pos = pos - 1;
	for(i=0;i<pos;i++)
	{	
		temp = temp->next;
		
	}
		new_node->next=temp->next;
		temp->next=new_node;
}

int main()
{
	int ch;
	do
	{
		printf("\n1 to add node at begining \n2 to add node at end \n3 to add node at desired \n4 to display the list \n5to end the program");
		printf("\nenter choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insertatbegin(); break;
			case 2: end(); break;
			case 3: desired();break;
			case 4: display();break;
			case 5: exit(0);break;
			default: printf("i am default");
		
		}
	}while(ch!=0);
	return 0;
	getch();
}
