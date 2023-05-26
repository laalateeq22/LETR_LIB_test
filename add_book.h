#ifndef ADD_BOOK_H_INCLUDED
#define ADD_BOOK_H_INCLUDED
//era
void add_Books(const char *filename)
{
    FILE *fptr;
    char bookName[50];
    char authorName[50];
    int n;
    printf ("How many books do you want to add on the library?\n");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf ("Enter the name of the book that you want to add on the library:\n");
        scanf("%s", bookName);
        printf ("Enter the name of the author that wrote this book:\n");
        scanf("%s", authorName);
        // Open the file in append mode
        fptr = fopen(filename, "a");
        if (fptr == NULL)
        {
            perror("Error opening the file! \n");
            return;
        }
        fprintf(fptr,"\n");
        // Write the strings to the file on the same line
        fprintf(fptr, "%s  %s  (1 book available))", bookName, authorName);

        // Close the file
        fclose(fptr);

        printf("You entered books successfully in the library! :)\n\n");
        printf ("-----------------------------------------------------");
    }
}

#endif // ADD_BOOK_H_INCLUDED
