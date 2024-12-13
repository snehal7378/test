#include<stdio.h>
int main()
{
    int num;
    printf("Enter number \n");
    scanf("%d,&num");

    if(num %2==0)
    {
        printf("Even no: %d",num);
    }
    else
    {
        printf("Odd no: %d",num);
    }
    
    

return 0;
}