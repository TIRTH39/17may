#include<stdio.h>

//C program to input and print array elements using pointers

main()
{
    int a[5]={5,4,6,8,9};
    int *p=&a[0];
    int i;
    
    for(i=0;i<5;i++)
    {
    	printf("%d",*(p+i));
	}   
	 
}
