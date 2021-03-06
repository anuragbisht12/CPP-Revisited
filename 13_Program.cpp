/*
C++ Data Structures

C/C++ arrays allow you to define variables that combine several data items of the same kind, 
but structure is another user defined data type which allows you to combine data items of different kinds.
*/

#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book

    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    // Print Book2 info
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}

// Book 1 title : Learn C++ Programming
// Book 1 author : Chand Miyan
// Book 1 subject : C++ Programming
// Book 1 id : 6495407
// Book 2 title : Telecom Billing
// Book 2 author : Yakit Singha
// Book 2 subject : Telecom
// Book 2 id : 6495700

/*
Structures as Function Arguments

You can pass a structure as a function argument in 
very similar way as you pass any other variable or pointer. 
*/
#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Books book);

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book

    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Print Book1 info
    printBook(Book1);

    // Print Book2 info
    printBook(Book2);

    return 0;
}
void printBook(struct Books book)
{
    cout << "Book title : " << book.title << endl;
    cout << "Book author : " << book.author << endl;
    cout << "Book subject : " << book.subject << endl;
    cout << "Book id : " << book.book_id << endl;
}

// Book title : Learn C++ Programming
// Book author : Chand Miyan
// Book subject : C++ Programming
// Book id : 6495407
// Book title : Telecom Billing
// Book author : Yakit Singha
// Book subject : Telecom
// Book id : 6495700

/*
Pointers to Structures

You can define pointers to structures in very similar way as you define pointer to any other variable as follows −

struct Books *struct_pointer;
Now, you can store the address of a structure variable in the above defined pointer variable. 
To find the address of a structure variable, place the & operator before the structure's name as follows −

struct_pointer = &Book1;
To access the members of a structure using a pointer to that structure, you must use the -> operator as follows −

struct_pointer->title;
*/

Live Demo
#include <iostream>
#include <cstring>
 
using namespace std;
void printBook( struct Books *book );

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
int main() {
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book
 
   // Book 1 specification
   strcpy( Book1.title, "Learn C++ Programming");
   strcpy( Book1.author, "Chand Miyan"); 
   strcpy( Book1.subject, "C++ Programming");
   Book1.book_id = 6495407;

   // Book 2 specification
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Yakit Singha");
   strcpy( Book2.subject, "Telecom");
   Book2.book_id = 6495700;
 
   // Print Book1 info, passing address of structure
   printBook( &Book1 );

   // Print Book1 info, passing address of structure
   printBook( &Book2 );

   return 0;
}

// This function accept pointer to structure as parameter.
void printBook( struct Books *book ) {
   cout << "Book title : " << book->title <<endl;
   cout << "Book author : " << book->author <<endl;
   cout << "Book subject : " << book->subject <<endl;
   cout << "Book id : " << book->book_id <<endl;
}

// Book title : Learn C++ Programming
// Book author : Chand Miyan
// Book subject : C++ Programming
// Book id : 6495407
// Book title : Telecom Billing
// Book author : Yakit Singha
// Book subject : Telecom
// Book id : 6495700