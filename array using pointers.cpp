#include<stdio.h>

void input(int*p)
{
	int i;
	for(i=0; i<=4; i++)
	{
		scanf("%d", p+i);   //p+1 = array[i]
	}
}
void display(int*p)
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("%d",*(p+i));
	}
}
void sort(int*p)
{
	int i,j,x;
	for(i=1; i<5; i++)
	{
		for(j=0; j<5-i; j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				x = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = x;
			}
		}
	}
}
main()
{
	int array[5];
	printf("Enter the five values \n");
	input(array);              //array name is passing the address of array
	display(array);
	sort(array);
	printf("\n");
	display(array);
	return 0;
}
