#ifndef EDIT_BOOK_H_INCLUDED
#define EDIT_BOOK_H_INCLUDED
//rosi
void editBook(struct book b[], int numBooks) {
    char name[50];
    int i;

    printf("Enter the name of the book to edit: ");
    scanf("%s", name);

// Search for the book by name
    for (i = 0; i < numBooks; i++) {
        if (strcmp(b[i].title, name) == 0) {
            // Edit book details
            printf("Enter new author name: ");
            scanf("%s", b[i].author);
            printf("Enter new amount: ");
            scanf("%d", &b[i].amount);
            printf("Enter new quantity: ");
            scanf("%d", &b[i].quantity);

            // Write updated book details to file
            FILE *fp = fopen("book.txt", "w");
            if (fp == NULL) {
                printf("Error opening file!\n");
                exit(1);
            }

            for (i = 0; i < numBooks; i++) {
                fprintf(fp, "%s %s %d %d\n", b[i].title, b[i].author, b[i].amount, b[i].quantity);
            }

            fclose(fp);
            printf("Book details updated successfully!\n");
            return;
        }
    }

    printf("Book not found!\n");
}



#endif // EDIT_BOOK_H_INCLUDED
