#include <iostream>

int main() {
    using namespace std;
    /* Break */
    //break is used to get out of a loop whenever we want.
    int n;
    for(n = 1; n <= 5; n++){
         cout << "*" << endl;
         if(n == 2){
             break;
         }
    }
    //another example of break using an infinite loop
    int x;
    for( ; ; ){
        cout << "Enter 0 to stop" << endl;
        cin >> x;
        if (x == 0){
            break;
    	}
    }

    /*Continue*/
    //continue passes control to the nearest conditional test in do...while loop, or the condition of while in while loop,
    //or the condition of for in for statements skipping the rest of the statements in the loop.
    //if we call continue in the middle of the loop, this will execute the next logical text without taking into account
    //the lines that are in between

    //example:
    n=1;
    while(n < 10){
        if (n == 5){
        n = n + 1;
      	    continue;
        }
        cout << "n = " << n << endl;
        n++;
    }

    //n= 5 is not printed, because since the continue is hit, continue parses the rest of the loop and jumps
    //directly to the next logical text. The row ''cout...'' is not printed
}
