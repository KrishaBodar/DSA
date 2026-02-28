/*
Output:
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print alphabet palindrome pyramid
void printAlphabetPalindromePyramid(int n){

    for(int i = 0; i < n; i++){                     // loop for rows
        
        // spaces
        for(int j = 0; j < n - i - 1; j++){        // O(n)
            cout << " ";
        }
        
        // increasing alphabets
        for(int j = 0; j <= i; j++){               // O(n)
            cout << char('A' + j);
        }
        
        // decreasing alphabets
        for(int j = i - 1; j >= 0; j--){           // O(n)
            cout << char('A' + j);
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printAlphabetPalindromePyramid(n);

    return 0;
}