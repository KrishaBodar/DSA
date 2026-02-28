/*
Output:
1      1
12    21
123  321
12344321
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print number palindrome gap pattern
void printNumberGapPalindrome(int n){

    for(int i = 1; i <= n; i++){              // loop for rows
        
        // increasing numbers
        for(int j = 1; j <= i; j++){          // O(n)
            cout << j;
        }
        
        // spaces
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++){     // O(n)
            cout << " ";
        }
        
        // decreasing numbers
        for(int j = i; j >= 1; j--){          // O(n)
            cout << j;
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // function call
    printNumberGapPalindrome(n);

    return 0;
}