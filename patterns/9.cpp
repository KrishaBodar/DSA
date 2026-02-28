/*
  *
 ***
*****
 ***
  *
*/


#include <bits/stdc++.h>
using namespace std;

// Function to print diamond pattern
void printDiamond(int n){
    
    // Upper Pyramid
    for(int i = 1; i <= n; i++){                 // O(n)
        
        // spaces
        for(int j = 1; j <= n - i; j++){         // O(n)
            cout << " ";
        }
        
        // stars
        for(int j = 1; j <= 2*i - 1; j++){       // O(n)
            cout << "*";
        }
        
        cout << endl;
    }

    // Lower Inverted Pyramid
    for(int i = n - 1; i >= 1; i--){             // O(n)
        
        // spaces
        for(int j = 1; j <= n - i; j++){         // O(n)
            cout << " ";
        }
        
        // stars
        for(int j = 1; j <= 2*i - 1; j++){       // O(n)
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
    printDiamond(n);

    return 0;
}