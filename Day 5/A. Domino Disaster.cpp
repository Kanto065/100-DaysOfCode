#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cin>>s;
        for(int j=0; j<n; j++){
            if(s[j]=='U')
                cout<<"D";
            else if(s[j]=='D')
                cout<<"U";
            else
                cout<<s[j];
        }
        cout<<endl;
    }
}
