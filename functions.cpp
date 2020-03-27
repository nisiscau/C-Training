#include <iostream>

/* Functions */

/*
There are two types of functions in C++.

Library Functions (built-in functions in C++ libraries)
User-defined Functions (which we create)

The syntax to declare a function is as follows:
return_type function_name ( parameters ) ;
We must also declare the types of the parameters we accept before writing their names.

Then we define the procedure of the function between brackets {}

*/

float average( int num1, int num2 )
{
    float avg; /* declaring local variable */
    avg = ( num1 + num2 )/2.0;
    return avg; /* returning the average value */
}
/*variables declared inside function are called local variables. A local variable can only
be used in the function in which it is declared. It has no use outside the function.
For example, in our case, avg is a local variable.*/



// Calling a function inside another
//it is possible for two user defined function (we have already done that in main())

int div_2(int a){
  if(a%2==0){
  	return 1;
  }
  else{
    return 0;
  }
}

void div_6(int b){
  using namespace std;
  if( div_2(b)==1 && b%3 == 0 ){
    cout << "Yes, the number is divisible by 6." << endl;
  }
  else{
    cout << "No, the number is not divisible by 6." << endl;
  }
}


/*RECURSION*/
/*Calling a function inside another, like in Python*/
int factorial( int a ) /* function */
{
  if( a == 0 || a == 1)
  {
    return 1;
  }
  else
  {
    return a*factorial(a-1);
  }
}

int main() {
    int a,b;
    std::cout << "Enter two whole numbers to see their average" << '\n';
    std::cin >> a;
    std::cin >> b;

    std::cout << "The average value is: " <<average(a,b)<< '\n';
    //note that avg has been defined outside of main's scope, so it exists
    //when we are calling it.

    //To define a function which doesn't return anything, we must use
    //the type 'void'. (that type is not allowed for main, which is an int)

    div_2(average(a,b));
    div_6(average(a,b));

    std::cout <<"int of average factorial = "<< factorial(int(average(a,b))) << '\n';
    return 0;
}
