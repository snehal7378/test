#include <stdio.h>

int main() 
{
    // int 1r; // invalid
    int radius = 5;

    printf("\nThe area of the circle is = %lf", (double)(radius * radius * 3.14));

    double f;

    int a, b; // declaration - single line comment
    a = 100;
    b = 200;
    //int a1 = 100; // initialization 
   // int c = a = b;

    printf("\na = %d, b = %d, c = %d", a, b);
    printf("\nAddition result: = %d", a + b);
    printf("\nSubtraction result: = %d", a - b);
    printf("\nMultiplication result: = %d", a * b);
    printf("\nDivision result: = %lf\n", (double)a / b); // cast to double for accurate division

    return 0;
}
