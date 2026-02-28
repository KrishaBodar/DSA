/*
Output:
1
2 3
4 5 6
7 8 9 10
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print continuous number triangle
void printNumberTriangle(int n){

    int num = 1;   // number starts from 1

    for(int i = 1; i <= n; i++){          // loop for rows
        
        for(int j = 1; j <= i; j++){      // loop for columns
            
            cout << num << " ";
            num++;                        // increment number
            
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Function call
    printNumberTriangle(n);

    return 0;
}