#include<stdio.h>
#include<conio.h>
struct date
{
	int d,m,y;
};

int main()
{
	struct date today = {24,02,2019};
	struct date d1;
	struct date d2;
	d2 = today;
	printf("Enter the date ");
	scanf("%d/%d/%d",d1.d,d1.m,d1.y);
	printf("Date %d/%d/%d",d1.d,d1.m,d1.y);
	return 0;
}
