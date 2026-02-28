/*
Output:
1
01
101
0101
10101
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print binary pattern
void printBinaryPattern(int n){

    for(int i = 1; i <= n; i++){          // loop for rows
        
        int start;
        if(i % 2 == 1)
            start = 1;                   // odd row starts with 1
        else
            start = 0;                   // even row starts with 0

        for(int j = 1; j <= i; j++){     // loop for columns
            
            cout << start;
            start = 1 - start;           // toggle between 1 and 0
            
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printBinaryPattern(n);

    return 0;
}