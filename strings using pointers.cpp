#include<stdio.h>
#include<string.h>
#define MAX_STRING_LEN 80

int length(char*);
char*reverse(char*);

main()
{
	printf("%d",length("Bilal"));
	printf("%s",reverse("Bilal"));
	//char s[6] = "Bilal";
	//printf("\n%s",s);
	return 0;
}

int length(char*p)
{
	int i;
	for(i=0; *(p+i)!='\0'; i++);
	return(i);
}

char* reverse(char*p)
{
	int i,length;
	char x;
	for(length=0; *(p+length)!='\0'; length++);
	for(i=0; i<length/2; i++)
	{
		x=*(p+i);
		*(p+i) = *(p+length-i-1);
		*(p+length-i-1) = x;	
	}
	return(p);
}
