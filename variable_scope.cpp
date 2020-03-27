#include <iostream>

using namespace std;

/* Variables that are declared inside a function or a block are called local
variables and are said to have local scope. These local variables can only
 be used within the function or block in which these are declared.*/

 //example:

int multiply(int a, int b){
        return a * b;
}

void func1(){
	int x = 4;
	cout << x << endl;
}

void func2(){
	int x = 5;
	cout << x << endl;
}
//global variables can be called anywhere in the code
int g = 100;

int main() {
    int x = 3, y = 5;
    int z;
    z = multiply( x, y );
    /*In this example, variables a and b are declared in the definition of
    the function multiply and are used within the function. These have no
    meaning outside the function. 'a' and 'b' are the copies of the variables
    'x' and 'y' respectively and store their respective values.
    Thus, any change in the values of 'a' and 'b' does not affect the values
    of 'x' and 'y'.*/
    cout << z << endl;

    /*another example, to see how variables only have an existence within their scope*/
    func1();
    func2();

    /*as we can see, the variable x in func1 is independent from x in func2 and from x in main.
    It gets destroyed when func1's block is executed.*/


    //local assignment gets priority over global assignment:
    g = 20;
    cout<<g<<endl;

    return 0;
}
