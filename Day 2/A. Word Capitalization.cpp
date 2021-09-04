#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,s2;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(i==0)
            s2+= toupper(s[0]);
        else
            s2+=s[i];
    }
    cout<<s2;
}
