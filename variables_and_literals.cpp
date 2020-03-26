#include <iostream>

int main()
{
    /* 1 - Variables */
    int n; //initialize n as an integer value (this assigns a certain address to n in the memory)
    n = 4; //assigning value 4 to variable n (if nothing is assigned, n takes some garbage value)
    std::cout<<n<<std::endl; //printing n

    /*Second example: printing the value of n inside a sentence */
    n=8; //reassignment
    std::cout<<"the value of n is now "<<n<<std::endl;

    /*third example: quotemarks show the variable name and not its value*/
    std::cout<<"the letter n is "<<'n'<<std::endl;

    /* 2 - Variable types */
    //char type (for single characters) (1 byte)
    char b;
    b = 'I';
    std::cout<<b<<std::endl;


    //floating point (4 bytes)
    float f;
    f = 3.12;
    std::cout<<f<<std::endl;

    //double floating point (8 bytes)
    double d;
    d = 3.12345;
    std::cout<<d<<std::endl;

    //boolean (1 byte)
    bool t;
    t = (5*5 == 25);
    std::cout<<t<<std::endl;

    /* 3 - Storing user input in a variable */
    //char example

    char c;
    std::cin>>c;
    std::cout<<c<<std::endl;
    //it is the ascii value (an int) of a char which is stored in the variable
    //we can retrieve that value by calling int:
    std::cout<<"the ascii value of the letter you entered is "<<int(c)<<std::endl;

    /* 4 - Type casting */
    //Suppose we have the value stored as a float (23.12) and we would like to access its
    //round part (23). We can do that by type casting.

    /* a - Implicit Conversion */
    // If we add an int or a float, for example, the datatype with the smallest memory size is
    //converted into the largest datatype to perform the operation.

    int x;
    std::cin>>x;

    float y;
    std::cin>>y;
    std::cout<<x+y<<std::endl; //note: this also works for chars thanks to their ascii value

    /* b - Explicit Conversion */
    //we can explicitly mention the type in which we wish to convert, by typing the target type between parenthesis.

    std::cout<<(int)y<<std::endl;

     /* 5 - l and r values */
     //an l value (stands for left value) is a value which has an address in the memory.
     //All variables, therefore, are l values.
     //l values are called as such because they are always on the left hand side of an assignment statement
     //r values, on the other hand, always appear on the right hand side of an assignment statement, because
     // they can't support another value assignment.

     x = 4 // l value : x, r value: 4

     /* 6 - Literals*/
     //literals are constants whose value cannot be changed, such as 5, 2.12, etc...

     /* 7 - Strings */
     //Unlike in Python, in C++, there is a distinction between single quotation marks ''
     //and double quotation marks "". The latter are for strings, which are collections of characters. 
    return 0;
}
