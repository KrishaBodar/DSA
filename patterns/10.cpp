/*
*
**
***
****
***
**
*
*/


#include <bits/stdc++.h>
using namespace std;

// Function to print half diamond pattern
void printHalfDiamond(int n){

    // Upper triangle
    for(int i = 1; i <= n; i++){          // O(n)
        for(int j = 1; j <= i; j++){      // O(n)
            cout << "*";
        }
        cout << endl;
    }

    // Lower triangle
    for(int i = n - 1; i >= 1; i--){      // O(n)
        for(int j = 1; j <= i; j++){      // O(n)
            cout << "*";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printHalfDiamond(n);

    return 0;
}