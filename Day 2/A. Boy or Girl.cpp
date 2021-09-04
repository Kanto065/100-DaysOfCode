#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int n,count=0;
    cin>>s;
    sort(s.begin(),s.end());
    n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";
}
