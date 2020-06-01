#include <iostream>

int main(){
    int *numPtr = new int; //new space allocated for the pointer

    using std::cout;
    using std::endl;

    cout<<"numPtr: "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;
    cout<<"*numPtr (we don't know its value yet): "<<*numPtr<<endl; //a random integer, we don't know which one

    *numPtr = 42;
    cout<<"*numPtr assigned 42"<<endl;
    cout<<"numPtr: "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;
    cout<<"*numPtr (now we know its value): "<<*numPtr<<endl; //now we know its value (it is 42)

    delete numPtr;
    numPtr = nullptr;
    return 0;

}
