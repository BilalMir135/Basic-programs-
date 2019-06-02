#include<stdio.h>
int main()
{
	int x#;
	int i = 3;
	int *j = &i;
	int **q=&j;
	int ***r=&q;
	//printf("\nAddress of i = %u ",&i);
	//printf("Value of i = %d",i);
	//printf("\nValue at address i = %d",*(&i));
	printf("%d %u ",i,j);
	printf("%d %u ",*j,&i);
	printf("%d  ",*&j);
	printf("%u",*(***&r));
	return 0;
}
