#include <stdio.h>

int main()
{
	FILE* fptr;
	char buffer[100000];

	fptr = fopen("Text.txt", "r");

    // This file is changed
	while (!feof(fptr)) {

		fread(buffer, sizeof(buffer), 1, fptr);
		printf("%s", buffer);
	}

	fclose(fptr);
	return 0;
}
