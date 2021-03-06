/*
C++ Dynamic Memory

A good understanding of how dynamic memory really works in C++ is essential to becoming a good C++ programmer.
 Memory in your C++ program is divided into two parts −

The stack − All variables declared inside the function will take up memory from the stack.

The heap − This is unused memory of the program and can be used to allocate the memory dynamically when program runs.

Many times, you are not aware in advance how much memory you will need to store particular information 
in a defined variable and the size of required memory can be determined at run time.

You can allocate memory at run time within the heap for the variable of a given type using a special 
operator in C++ which returns the address of the space allocated. This operator is called new operator.

If you are not in need of dynamically allocated memory anymore, you can use delete operator, 
which de-allocates memory that was previously allocated by new operator.

new and delete Operators
There is following generic syntax to use new operator to allocate memory dynamically for any data-type.
*/

#include <iostream>
using namespace std;

int main()
{
    double *pvalue = NULL; // Pointer initialized with null
    pvalue = new double;   // Request memory for the variable

    *pvalue = 29494.99; // Store value at allocated address
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue; // free up the memory.

    return 0;
}

/*
Dynamic Memory Allocation for Arrays

Consider you want to allocate memory for an array of characters, i.e., string of 20 characters. 
Using the same syntax what we have used above we can allocate memory dynamically as shown below.
*/

#include <iostream>
using namespace std;

class Box
{
public:
    Box()
    {
        cout << "Constructor called!" << endl;
    }
    ~Box()
    {
        cout << "Destructor called!" << endl;
    }
};
int main()
{
    Box *myBoxArray = new Box[4];
    delete[] myBoxArray; // Delete array

    return 0;
}

// Constructor called!
// Constructor called!
// Constructor called!
// Constructor called!
// Destructor called!
// Destructor called!
// Destructor called!
// Destructor called!