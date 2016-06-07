#include <stdio.h>

int main()
{
    int a;
    printf("enter element a");
    scanf("%d",&a);
    if (a<0)
    {
        printf("is negative");
        
    }
   
    else if (a==0)
    {
        printf("zero");
    }
    
    else
    {
        printf("positive");
        
    }
}
