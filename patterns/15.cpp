/*
Output:
ABCDE
ABCD
ABC
AB
A
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print reverse alphabet triangle
void printReverseAlphabetTriangle(int n){

    for(int i = n; i >= 1; i--){           // loop for rows
        
        for(int j = 0; j < i; j++){       // loop for columns
            
            cout << char('A' + j);        // print alphabets
            
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printReverseAlphabetTriangle(n);

    return 0;
}