/*

*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;

void p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    
    cout<<"Enter number of test cases: ";
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter number of rows for test case "<<i+1<<": ";
        cin>>n;
        p2(n);
        cout<<endl;
    }

    return 0;
}