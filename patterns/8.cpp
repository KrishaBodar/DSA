/*

*********
 *******
  *****
   ***
    *

*/

#include<bits/stdc++.h>
using namespace std;

void invertedPyramid(int n){
    for(int i = 0; i < n; i++){

        // print spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        // print stars
        for(int j = 0; j < 2*(n - i) - 1; j++){
            cout << "*" << "";
        }

        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    invertedPyramid(n);

    return 0;
}