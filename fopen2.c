#include <stdio.h>

int main()
{
    FILE *fptr;
    char c;

    fptr = fopen("tanu2.txt", "r");

    while (1)
    {
        c = fgetc(fptr);
        if (c != EOF)
        {
            printf("%c", c);
        }
        else
        {
            break;
        }
    }
}