
#include <stdio.h>

int main()
{
    int num, index, i;
    int bin[32];

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    index = 32 - 1;

    while(index >= 0)
    {
        bin[index] = num & 1;

        index--;
        num >>= 1;
    }

    printf("Converted binary: ");
    for(i=0; i<32; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}
