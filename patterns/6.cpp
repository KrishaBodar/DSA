/*

12345
1234
123
12
1

*/

#include<bits/stdc++.h>
using namespace std;

void numberPattern(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    numberPattern(n);

    return 0;
}