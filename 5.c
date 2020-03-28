#include <stdio.h>
#include <string.h>

int main()
{
	char str1[1000],str2[1000];
	
	printf ("Enter the first string: ");
	gets(str1);
	
	printf ("Enter the second string: ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf ("The answer is: %s",str1);
	
	return 0;
}