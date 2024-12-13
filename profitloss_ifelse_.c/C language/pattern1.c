#include<stdio.h>
int main()
{ 
    int n , sum = 0 ;
    do 
    {   
         printf("\nEnter the value : = ");
         scanf("%d",&n);
         sum += n ;


    } while ( n !=0);// n value should not be equal to 0 then it is true 

    printf("\n sum  = %d \n " ,sum);



return 0;
}