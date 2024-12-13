#include<stdio.h>
int main()
{
    int num;
    printf("Enter num\n ");
    scanf("%d",&num);

    switch ((num>0)-(num<0))
    {
    case 1:
        printf("Number is positive :%d",num);
        break;
    case -1:
         printf("Number is negative :%d",num);
         break;
    case 0:
        printf("Number is zero:%d",num);
        break;


}


return 0;
 }