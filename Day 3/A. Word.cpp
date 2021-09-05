#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,s2;
    cin>>s;
    int numOflett = s.length();
    int upper=0, lower=0;
    for(int i=0; i<numOflett; i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }
    //cout<<numOflett<<" "<<upper<<" "<<lower<<endl;
    if(upper>lower){
        for(int i=0; i<numOflett; i++){
            s2+=toupper(s[i]);
        }
    }
    else if(upper<=lower){
        for(int i=0; i<numOflett; i++){
            s2+=tolower(s[i]);
        }
    }
    cout<<s2<<endl;




}
