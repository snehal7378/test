#include<stdio.h>
int main()
{
    int choice, r,a,w,i;
    float pie = 3.14;
    printf("....Find The Area.....");
    printf("1.Area of circle");
    printf("2.Area of square");
    printf("3.Area of Rectangle");

    printf("Enter the choice");
    scanf("%d",&choice);

     switch (choice)
    
    {
        case 1:
           printf("Enter the value of Radius");
           scanf("%d",&r);
           printf("Area of circle is %f",pie*r*r);
        break;
        case 2: 
           printf("Area of Square");
           scanf("%d",&a);
           printf("Area of Square is %d",a*a);
        break;
        case 3: 
           printf("Enter the value of wide and length");
           scanf("%d%d", &w,&i);
           printf("Area of Rectangle is %d",w*i);
        break;
        default:printf("\n Invalid choice");

    }

    printf("out of the switch case");

    return 0;




}