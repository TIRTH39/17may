#include <stdio.h>

main() 
{
    char str[100],*ptr;
    int c;
    
    printf("Enter any string:-");
    
    gets(str);
    ptr=str;
    c=0;
    
    while (*ptr!=NULL) 
	{
        c++;
        ptr++;
    }
    
    printf("The length of the string is:-%d",c);
    
}
