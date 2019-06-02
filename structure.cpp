#include<stdio.h>

struct book
{
	int book_id;
	char book_title[20];
	float price;
};

struct book input()
{
	struct book b;
	printf("Enter Book Id = ");
	scanf("%d",&b.book_id);
	printf("\nEnter Book Title = ");
	fflush(stdin);                  //this clears the bufferzone from which scanf and gets take input from keyword so after using scanf the bufferzone must be set free
	gets(b.book_title);
	printf("\nEnter Book Price = ");
	scanf("%f",&b.price);
	return(b);
	//clrscr();
}

void display(struct book b)
{
	printf("Book Id    = %d",b.book_id);
	printf("\nBook Title = %s",b.book_title);
	printf("\nBook Price = %f",b.price);
}

int main()
{
	struct book b1;
	b1=input();
	display(b1);
	return 0;
}
