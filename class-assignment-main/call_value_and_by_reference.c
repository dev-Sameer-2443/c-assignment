#include <stdio.h>

int main()
{
    int a;
    a = 10;

    int *ptr = &a;
    printf("number is %d\n", a);    // call by valaue
    printf("number is %d\n", *ptr); // call by reference
    
    printf("\nSameer Kumar ,125113025");
    return 0;
}