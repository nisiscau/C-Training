#include <iostream>
/*Normally, when we call a function,
 the function first gets called and then its body gets executed.
 It takes comparatively more time to call a function than to write the code
 in the program in place of that function call.

 This is why we use the inline keyword when defining a function. It will
 indicate that whenever the function is called in main() or in another function,
 the compiler will simply replace that call with that function's code*/

 //example with sum
 inline int sum(int n1, int n2){
     return n1+n2;
 }
//example with custom function
 inline int exp(int x, int y, int z)
 {
 	return (x + y) * z;
 }

int main() {
    int n1,n2;
    std::cout << "Enter two numbers to get their sum" << '\n';
    std::cin >> n1;
    std::cin >> n2;
    std::cout << sum(n1,n2) << '\n';
    std::cout << exp(n1,n2,sum(n1,n2)) << '\n';

    return 0;
}
