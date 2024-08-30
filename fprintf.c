#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[3000];
    FILE *ptr = fopen("Text.txt", "a");

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Line: ");
        fgets(str, 3000, stdin);

        fprintf(ptr, "%d. %s", i, str);
    }
    
    return 0;
}
