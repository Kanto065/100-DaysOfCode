#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s,s2;
    cin>>s;

    for(int i=0; i<t; i++){
        for(int i=0; i<n; i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
}
