#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int o=0;
        for(int i=0;i<n;i+=2){
            o+=a[i];
        }
        int e=0;
        for(int i=1;i<n;i+=2){
            e+=a[i];
        }
        if(e>o){
            cout<<e<<endl;
        }
        else{
            cout<<o<<endl;
        }
    }
}
