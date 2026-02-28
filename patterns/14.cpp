/*
Output:
A
AB
ABC
ABCD
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print alphabet triangle pattern
void printAlphabetTriangle(int n){

    for(int i = 1; i <= n; i++){              // loop for rows
        
        for(int j = 0; j < i; j++){           // loop for columns
            
            cout << char('A' + j);           // convert number to character
            
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printAlphabetTriangle(n);

    return 0;
}