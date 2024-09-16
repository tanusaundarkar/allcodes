#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr1, *ptr2, *ptr3;
    char c;

    ptr1 = fopen("file1.txt", "r");
    ptr2 = fopen("file2.txt", "r");
    ptr3 = fopen("file3.txt", "w");

    while ((c = fgetc(ptr1)) != EOF)
	{
		fputc(c, ptr3);
	}

	while ((c = fgetc(ptr2)) != EOF)
	{
		fputc(c, ptr3);
	}

    //remove("file3.txt");

    return 0;
}
