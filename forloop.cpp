//print multiplication table of user input integer upto 10.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of which you want a multiplicaton table: ";
    cin>>n;
    for(int i = 1; i<=10 ; i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}