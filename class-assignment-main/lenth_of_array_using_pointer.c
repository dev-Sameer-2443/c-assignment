#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    printf("string lenth is %d", l);

    printf("\nSameer Kumar ,125113025");

    return 0;
}