#ifndef MANAGER_OPTION_H_INCLUDED
#define MANAGER_OPTION_H_INCLUDED
/*
void UserOption(struct person p[], struct book b[], int NOU, int NOB){
    //PRINTDATA->TEA
    int n;
    while(1){
        printf("What would you like to search?\n");
        printf("1. Search for the book by: title\n\
               2. search for the books by the author \n\
               enter \"-1\" to exit");
        scanf("%d", &n);

        if (n == 1){//Layan_Title
            int i = findBook(NOB, b);
            print_book(i, b);
        }
        else if (n == 2){//search for the book by author
            search_books_by_author("book.txt", author); ///change the name of the file name
        }
        else if(n == -1)
            break;
        else
            printf("this is not an option in the menu\n");
    }
}
void ManagerOption(struct person p[], struct book b[], int NOU, int NOB){
    printf("1. Search for the book data by: title\n\
           2. search for the books by author \n\
           3. search the users \n\
           4. edit a user\n\
           5. edit a book\n\
           6. add a book\n\
           7. add a user\n\
           8. delete a user\n\
           9. delete a book\n\
           10. find the overdue books\n\
           11. find the upcoming due date");
    scanf("%d", &n);

    if(n == 1){//LAYANS SEARCH BY TITLE
        int i = findBook(NOB, b);
        print_book(i, b);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 2){//TEAS SEARCH BY AUTHOR
        search_books_by_author("C:\\Users\\User\\Documents\\sweproject\\book.txt", author);///change the file name
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 3){//LAYAN SEARCH BY USER
        int userID = findUser(i, p);
        print_user(userID, p);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 4){//LAYAN EDIT USER
        editUser(p, b,NOU, NOB);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 5){//ROSIS EDIT BOOK
        editBook(b, NOB);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 6){//ERAS ADD BOOKS
        const char *filename = "book.txt";/// file name here
        add_Books(filename);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 7){//ROSIS ADD USERS
        addUser(p, &NOU);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 8){//TEAS DELETE USER
        printf("Enter search type (1 for ID, 2 for name, 3 for surname, 4 for phone): ");
        scanf("%d", &search_type);
        printf("Enter search key: ");
        scanf("%s", key);
        delete_user(filename, key, search_type);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 9){//ERAS DELETE BOOKS
        const char* authorToDelete[50];
        const char* titleToDelete[50];
        int num,nrOfBooksToBeDeleted, nrOfAuthorsToDelete;
        printf ("Do you want to delete a book by:\n1-Delete by Title\n2-Delete by Author\n");
        scanf("%d", &num);
        if (num==1){
            printf("How many books do you want to delete?\n");
            scanf("%d", &nrOfBooksToBeDeleted);
            for(int i=0; i<nrOfBooksToBeDeleted; i++){
                printf("Which book do you want to delete?\n");
                scanf ("%s", titleToDelete);
                delete_by_title(filename,titleToDelete);
            }
        }
        else if (num==2){
            printf("How many authors do you want to delete?\n");
            scanf("%d", &nrOfAuthorsToDelete);
            for(int i=0; i<nrOfAuthorsToDelete; i++){
                printf("Books of which author do you want to delete?\n");
                scanf ("%s", authorToDelete);
                delete_by_author(filename, authorToDelete);
            }
        }
        else
            printf("You entered an invalid number. Try again! :)\n");
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 10){//TEAS OVERDUE DATE
        print_due_date("C:\\Users\\User\\Documents\\sweproject\\user.txt");///change the file name
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    else if(n == 11){//LAYANS UPCOMING DATE
        upcomingDueDate(p, b, NOU, NOB);
        printf("\nTask completed!\n");
        printf("---------------\n");
    }
    printf("would you like to perform any other actions?\n if you would like to exit then enter -1 \"");
    stop = 0;
    scanf("%d", stop);
    if(stop == -1)
        break;
}

void memberOption(int userID, struct person p[], struct book b[], int NOU, int NOB){
    printf("\
what would you like to perform\n\
1. view your account details\n\
2. edit your data\n\
3. search for books by author\n\
4. search for book by title\n");
    int x;
    scanf("%d", &x);
    while(1){
        if(x == -1)//exit the menu
            break;
        else if(x == 1){//see their data
            printf("name: %s\n", p[userID].name);
            printf("surname: %s\n"), p[userID].surname;
            printf("phone number: %0.lf\n", p[userID].phone);
            printf("address: %s\n", p[userID].address);
            printf("ID: %d\n", p[userID].ID);
            printf("due date: %d\n", p[userID].dueDate);
            break;
        }
        else if(x == 2){//edit their data
            editUserID(p, b, NOU, NOB, userID);
        }
        else if(x == 3){//search for the book by author
            search_books_by_author("C:\\Users\\User\\Documents\\sweproject\\book.txt", author); ///change the file name
        }
        else if(x == 4){//search book by title
            int i = findBook(NOB, b);
            print_book(i, b);
        }
        else
            printf("ERROR: invalid option");

    }
}
*/
#endif // MANAGER_OPTION_H_INCLUDED
