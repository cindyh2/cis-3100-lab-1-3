//
//  main.cpp
//  lab 3 question 4
//
//  Created by Cindy Hernandez on 3/10/24.
//

#include <iostream>
using namespace std;

int main() {
    // declaring variables
    int all = 0, even = 0, odd = 0, i = 0;
    
    // using while loop
    while ( i <= 100 ) {
        // for ALL integers
        all += i;
        // for odd integers
        if (i % 2 == 1 ){
            odd += i;
        // for even integers
        } else if (i % 2 == 0) {
            even += i;
        }
        i++;
    }
    
    // statements with the totals
    cout << "The sum of all even integers is " << even << "." << endl;
    cout << "The sum of all odd integers is " << odd << "." << endl;
    cout << "The sum of all integers combines is " << all << "." << endl;
    
    return 0;
}
