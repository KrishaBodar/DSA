/*

    *
   ***
  *****
 *******
*********

*/

#include<bits/stdc++.h>
using namespace std;

void pyramidPattern(int n){
    for(int i = 0; i < n; i++){
        
        // print spaces
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        // print stars
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    pyramidPattern(n);

    return 0;
}