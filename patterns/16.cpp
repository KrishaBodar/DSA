/*
Output:
A
BB
CCC
DDDD
EEEEE
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print same alphabet triangle pattern
void printSameAlphabetTriangle(int n){

    for(int i = 0; i < n; i++){               // loop for rows
        
        char ch = 'A' + i;                   // select alphabet
        
        for(int j = 0; j <= i; j++){         // loop for columns
            
            cout << ch;                      // print same alphabet
            
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printSameAlphabetTriangle(n);

    return 0;
}