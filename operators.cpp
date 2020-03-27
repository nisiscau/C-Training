#include <iostream>
#include <cmath>
int main() {
    using namespace std;

    int a = 42, b = 23;
    cout<< "Standard Operations" <<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    cout<<"addition "<<a+b<<endl; //addition
    cout<<"substraction "<<a-b<<endl; //substraction
    cout<<"Product "<<a*b<<endl; //product
    cout<<"Remainder "<<a%b<<endl; //a mod b
    cout<<"division "<<float(a)/b<<endl; //a mod b
    cout<<"division without type casting "<<a/b<<'\n'<<endl; //int/int remains an int

    /* difference between assignment and boolean */
    cout<< "Assignment vs Boolean" <<endl;
    int c;
    c = 12;
    cout<<"Assignment: "<<c<<endl;
    cout<<"Boolean: "<<(c==12)<<'\n'<<endl;

    /*Boolean operators*/
    //They follow the same syntax as in Python : ==, !=, >, <, >=, <=

    /*Logical operators*/
    //AND: &&, OR: ||, NOT: !
    cout<< "Logical Operators" <<endl;
    bool t = a>b, u = !t;
    cout<< (t&&u) <<endl;
    cout<< (t||u) <<endl;
    cout<< (t&&!u) <<'\n'<<endl;

    /*Assignment Operators*/
    //same syntax as in Python
    cout<< "Assignment Operators" <<endl;
    a-=2;
    cout<<"a = "<<a<<endl;
    b+=2;
    cout<<"b = "<<b<<endl;
    a%=b;
    cout<<"a = "<<a<<endl;
    a/=b;
    cout<<"a = "<<a<<endl;

    /*Increment and Decrement operators*/
    //prefix: decrement implements the change and then returns the value before increment
    cout<<"Prefix: Before positive increment, a = "<<a<<endl;
    cout<<"Prefix: After positive increment, a = "<<++a<<endl;
    cout<<"Prefix: After negative increment, a = "<<--a<<endl;

    //postfix: returns the value before increment.decrement and then implements the change
    cout<<"Postfix: Before positive increment, a = "<<a<<endl;
    cout<<"Postfix: After positive increment, a = "<<a++<<endl;
    cout<<"Postfix: After negative increment, a = "<<a--<<endl;

    /*Sizeof function: returns the size taken by a variable in the memory (in bytes)*/
    int x;
    float y;
    double z;
    char e;
    x = 3;
    y = 3.12;
    z = 325678990;
    e = 'r';
    cout<<"Size of int: "<<sizeof(x)<<"'\n'Size of float: "<<sizeof(y)<<"'\n'Size of double: "<<sizeof(z)<<"'\n'Size of char: "<<sizeof(e)<<endl;

    /*Let's do some maths*/
    cout<<sin(y)<<endl;

    /*Some of the functions available in cmath below:

        Function	Description
        sin	        Calculates the sine value of some angle in radians
        cos	        Calculates the cosine value of some angle in radians
        ceil	    Calculates the number which is equal to the integer just greater than the number passed
        floor	    Calculates the number which is equal to the integer just smaller than the number passed
        fmin	    Returns the smaller number among the 2 numbers passed to it
        fmax	    Returns the larger number among the 2 numbers passed to it
        fabs	    Calculates the absolute value of a number
        round	    Rounds a float or a double to the nearest integer
        sqrt	    Calculates the square root of a number
        pow	        It takes two numbers as parameters and returns the value of the first number raised to the power equal to the second number
        log	        Returns the logarithm of a number.
    */
    cout<<fmin(1,'a')<<endl; //supports type casting!

    /*Binary Operations*/

    /*
        &	Binary AND Operator
        ∣    Binary OR Operator
        ^   Binary XOR
        ~	Binary One's Complement
        <<	Binary Left Shift Operator (2 bits)
        >>	Binary Right Shift Operator (2 bits)

    */
}
