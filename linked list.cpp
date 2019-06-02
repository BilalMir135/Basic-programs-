#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *start = NULL;

struct node * createNode()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	return(n);
}

void insertnode()
{
	struct node *temp, *t;
	temp = createNode();
	printf("Enter the number = ");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(start==NULL)
	{
		start = temp;
	}
	else
	{
		t = start;
		while(t->link!=NULL)
		{
			t = t->link;
		}
		t->link = temp;
	}
}

void deletenode()
{
	struct node *t;
	if(start==NULL)
	{
		printf("The list is empty");
	}
	else
	{
		t=start;
		start=start->link;
		free(t);
	}
}

void viewnode()
{
	struct node *t;
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d\t",t->info);
			t=t->link;
		}
	}
}


int main()
{
	int ch;
	printf("\n1. Add value in the list");
	printf("\n2. Delete the first value");
	printf("\n3. View List");
	printf("\n4. Exit");

	while(1)
	{
		printf("\n\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertnode();
				break;
			case 2:
				deletenode();
				break;
			case 3:
				viewnode();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	return(0);
}
	
	
	
	
	
	
	
	
	
	
	
	
	

