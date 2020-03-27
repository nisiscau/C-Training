#include <iostream>

using namespace std;

void FactPointer(int,int *);
void ReverseDigits(int,int *);

int main() {
    //Write a program to print the address of a variable input by user
    int inp, *ad;

    cin>>inp;
    ad = &inp;
    cout<<ad<<endl;

    //Write a program to print the address of the pointer to a variable whose value is input from user.
    //for this exercise, we will keep inp as the input
    int **adad;
    adad = &ad; //we cannot write &&inp, we must first define a pointer that points towards inp
    cout<<adad<<endl;

    //Write a program to print the value of the address of the pointer to a variable whose value is input from user.
    int valad;
    valad = *ad;
    cout<<valad<<endl;

    //Write a program to find the factorial of a number using pointers
    int x;
    int *ax;
    cout << "Enter a number\n";
    cin >> x;
    ax = &x;
    FactPointer(x,ax);

    //Write a program to reverse the digits a number using pointers.
    int y;
    int *ay;
    cout << "Enter a number to get its digits reverted\n";
    cin>>y;
    ay = &y;
    ReverseDigits(y,ay);


    return 0;
}

void FactPointer(int n, int *ad){
    *ad = 1;
    int i;
    for (i=1;i<=n;i++){
        *ad *=i;
    }
    cout << "The factorial of "<< n <<" is "<< *ad <<'\n';

}

void ReverseDigits(int y, int *ay){
    int r,rev,i;
    rev = 0;
    i=0;
    while (*ay%10>0){
        r = *ay%10;
        rev = 10*rev+r;
        *ay /= 10;
        i++;
    }
    cout<<rev<<endl;
}
