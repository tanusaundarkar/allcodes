#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char c;

    fptr = fopen("tanu2.txt", "w");

    if(fptr == NULL)
    {
        printf("the file is not opened. The program will ""exit now");
        return 0;
    } 
    else{
        printf("The file is opened successfully");
    }


    return 0;
}
