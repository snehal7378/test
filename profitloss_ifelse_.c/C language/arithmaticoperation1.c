#include<stdio.h>
int main()
{
    int a = 10 , b = 20 , choice ; 

    printf("\n------- Menu------------\n");
    printf("\n 1 :Addtion");
    printf("\n 2 :Substraction");
    printf("\n 3 :Multiplication");
    printf("\n 4 :Division");

    printf("\n PLEASE : Enter your choice : =");
      scanf("%d",&choice);

      printf("\nenter the value of a and b : = ");
        scanf("%d%d" ,&a,&b);

        printf("\n---------- Calculater------ \n");
         if (choice == 1)
         {
            printf("\n Addition = %d",a+b);
         }
         else if (choice == 2 )
         {
             printf("\n Substraction = %d",a-b); 
         }
         else if (choice == 3)
         {
             printf("\n Multiplication = %d",a*b);
         }
         else if (choice == 4)
         { 
            printf("\n Division = %d",a/b);
         }
         else
         {
             printf("\n INVALID CHOICE....! \n");
         }


   return 0;
}