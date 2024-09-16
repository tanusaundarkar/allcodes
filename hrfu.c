#include<stdio.h>

int main()
{
    FILE *ptr1, *ptr2, *ptr3;
    char c;

    ptr1 = fopen("hdsah1.txt","r");
    ptr2 = fopen("asydt2.txt","r");
    ptr3 = fopen("gsadt3.txt","w");

    while((c = fgetc(ptr1) != EOF))
    {
        fputc(c, ptr3);
    }

    while((c = fgetc(ptr2) != EOF))
    {
        fputc(c, ptr3);
    }

    return 0;
}