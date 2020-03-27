#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    /* if statement */
    int a,b;
    a = 45;
    b = 45;
    if (a==b) {
        cout<<"a is equal to b"<<endl;
    }
    /* else statement */
    b = 47;
    if (a==b) {
        cout<<"a is equal to b"<<endl;
    }
    else {
        cout<<"a is not equal to b"<<endl;
    }
    /*to execute only one statement in if/else, we can get rid of the curly brackets {}.
    If we want more than one statement to be executed inside, we need them*/
    if (a%2 == 0)
        cout<<"a is even"<<endl;
    else
        cout<<"a is uneven"<<endl;

    /* Nested if/else */
    int x,y,z;
    x = 3;
    y = 4;
    z = 5;
    if (z>x){
        if (z>y)
            cout<<"z is the max"<<endl;
        else
            cout << "z is in the middle" << '\n';
    }
    else
        cout << "z is the smallest" << '\n';

    /*else if statement*/
    char e,f,g;
    e = 'E';
    f = 'F';
    g = 'G';
    if (e>g) {
        cout<<"the ascii value of e is greater than that of f"<<'\n';
    }
    else if (g>f){
        cout<<"the ascii value of g is greater than that of f"<<'\n';
    }

    /*switch/case : syntax : switch (expression to evaluate) {
        case value_to_evaluate_against:
            action
        }
    If we want to stop the execution when a given case is encountered, we call break inside
    the case.
    If we want to terminate the switch by doing something if no case has been encountered,
    we call  "default:"

    The variable used in a switch statement can only be a short, byte, int or char.
    The values for each case must be the same data type as the variable type.
    */

    switch (e) {
        case 'f':
            std::cout << "e=f" << '\n';
        case 'g':
            std::cout << "e=g" << '\n';
        default:
            std::cout << "e is different" << '\n';
    }
    /*Ternary operators*/

    //their syntax is different than in Python (expression1 if condition else expression2)
    //In C++, we evaluate the condition first: (condition)? expression1:expression2
    //if (condition) is true, expression1, else expression2

    int age;
	cout << "Enter age" << endl;
	cin >> age;
	(age > 18) ? cout << "eligible to vote" : cout << "not eligible to vote"<<'\n';

    //another example
    int num1 = 4, num2 = 5, num;
	num = (num2 > num1) ? num2 : num1;
	cout << "The greater number is " << num << endl;
}
