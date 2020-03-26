#include <iostream>

int main() {
    /* code for Hello World on Separated lines*/
    std::cout << ("Hello") << std::endl;
    std::cout << ("World") << std::endl;

    /* code for Hello World on same lines*/
    std::cout << "Hello"<<"World"<< std::endl;

    //Variant (we can also comment with double slashes!)
    std::cout << "Hello\nWorld"<< std::endl;
    return 0;
    //WARNING : For string, unlike in Python, we must use double quotation marks
}
