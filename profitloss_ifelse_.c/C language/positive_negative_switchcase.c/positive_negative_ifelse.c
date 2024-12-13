#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num \n");
    scanf("%d",&num);

    if(num>0)
    {
        printf("No is positive: %d",num);
    }

    else
    {
        printf("No is negative: %d",num);
    }


return 0;
}