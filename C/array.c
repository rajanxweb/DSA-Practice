#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int publishedYear;
};

int main()
{
    struct Book Book1;

    strcpy(Book1.title, "Atomic Habits");
    strcpy(Book1.author, "James Clark");
    Book1.publishedYear = 2013;

    printf("--- Student Record ---\n");
    printf("title: %s\n",Book1.title);
    printf("author: %s\n",Book1.author);
    printf("published year: %d\n", Book1.publishedYear);

    
};