#include<stdio.h>
int main()
{ 
    int age ;
    printf("\nHow old are you : =");
    scanf("%d",&age);

    if (age > 18 && age < 60)
    {
        printf("\n Valid for Vote ...!");
    }
     else if(age > 0 && age <= 18)
     {
        printf("\n Not Valid foe vote ...!");
     }
     else
     {
        printf("\n INVALID AGE ...! \n");
     }

     // if - else ladder

      return 0; 
}
