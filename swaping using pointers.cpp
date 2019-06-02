#include<stdio.h>
void swap(int*,int*);
main()
{
	int a,b;
	printf("Enter the first num = ");
	scanf("%d",&a);
	printf("Enter the second num = ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("First num = %d  Second num = %d",a,b);
	return 0;
}
void swap(int*x,int*y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
