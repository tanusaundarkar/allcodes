#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr = fopen("fseekfile.txt", "w");

    fputs("abcdefghij", fptr);

    fseek(fptr, 4, SEEK_SET);

    fputs(" febcgergrtvhvtrhr ", fptr);
    return 0;
}
