#include<stdio.h>
int main()
{
    int choice , a,b;
    printf("\n--------Valculater Menu--------\n");
    printf("\n1:Addition");
    printf("\n2:Substraction");
    printf("\n3:Multiplication");
    printf("\n3:Division");

    printf("\nEnter the choice : = ");
    scanf("%d",&choice);

    printf("\nEnter the value of a and b : =");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
      case 1 :printf("\nThe Addition is : = %d",a+b);
      break;

      case 2 :printf("\nThe Substraction is : = %d",a-b);
      break;

      case 3 :printf("\nThe Multiplication is : = %d",a*b);
      break;

      case 4 :printf("\nThe Division is : = %d",a\b);
      break;

      default:printf("\nInvlid choice...!");


    }

     printf("\nOut of Switch case..!\n");



     return 0 ;


    




}