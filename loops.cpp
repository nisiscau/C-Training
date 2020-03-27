#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    /*While Loop*/
    int n = 1;
    while (n <= 10){
        cout << "n= "<< n << '\n';
        n++;
    }
    //another example
    int choice = 1;
	while( choice == 1 ){

		int a;

		cout << "Enter a number to check even or odd" << endl;
		cin >> a;		//input number

		//check whether number is even or odd

		if( a%2 == 0 ){
			cout << "Your number is even" << endl;
		}
		else{
			cout << "Your number is odd" << endl;
		}

		cout << "Want to check more : 1 for yes and 0 for no" << endl;

		cin >> choice;
	}

	cout << "I hope you checked all your numbers" << endl;

    /*for loop*/
    //C++ syntax is more precise than Python's in giving us the intuition that a
    //for loop is just another version of a while loop.
    //The syntax is as follows : for (n=start;condition_on_n;n++ or n--){steps to execute}

    //Most of the times, that condition in the middle refers to whether n is smaller or greater than a certain quantity (len of an array...)

    for( n = 1; n <= 10; n++ ){
		cout << n << endl;
	}

    /*do while*/
    //do while works identically as while, but only checks the condition at the end of the first iteration.
    //This ensures that the steps are executed at least once.
    std::cout << "Enter a value for n" << '\n';
    cin>>n;
    do{
    	cout << pow(n,2) << endl;
      	n++;
    } while(n <= 10);

    /*nested loops*/
    int i;
  	int j;

  	for(i = 12; i <= 14; i++){            /*outer loop*/

  		cout << "Table of " << i << endl;

    		for(j = 1; j <= 10; j++){         /*inner loop*/

      			cout << i << "*" << j << "=" << (i*j) << endl;

    		}
  	}

    /*Infinite loops*/
    //When the condition is left empty, it is considered true and the loop never ends
    //in this case, we must press Ctrl+C to escape the loop
    for(;;){
        std::cout << "This is an infinite loop" << '\n';
    }

    return 0;
}
