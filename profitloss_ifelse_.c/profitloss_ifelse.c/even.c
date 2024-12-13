// Write a C program to check whether a number is even or odd using switch case.

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the numbers: ");
    scanf("%d",&n);

    switch(n%2==0)
    {
        case 1: 
               printf("even");
               break;

        case 0: 
               printf("odd");

            
    }
}