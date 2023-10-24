#include <stdio.h>

int main()
{
    FILE *file = fopen("pyramids.txt", "w");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    // Pyramid 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            fprintf(file, "%c ", 'A' + j);
        }
        fprintf(file, "\n");
    }

    fprintf(file, "\n"); // Add a separator

    // Pyramid 2
    

    fclose(file);

    printf("Pyramids have been written to 'pyramids.txt'.\n");

    return 0;
}
