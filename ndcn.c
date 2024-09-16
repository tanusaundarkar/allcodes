#include<stdio.h>

int main()
{
    FILE *fptr = fopen("fseek.txt" , "w+");

    fputs("ygsdatybdug",fptr);

    fseek(fptr, 5, SEEK_SET);

    fputs(" gtyasgbbds ",fptr);
    return 0;
}