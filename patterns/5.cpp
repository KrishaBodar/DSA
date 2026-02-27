/*

*****
****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    starPattern(n);

    return 0;
}