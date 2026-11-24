#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(abs(n)<10){
        cout<<"1";
    }
    else if(abs(n)<100){
        cout<<"2";
    }
    else if(abs(n)<1000){
        cout<<"3";
    }
    else{
        cout<<"More than 3 digits";
    }
}
