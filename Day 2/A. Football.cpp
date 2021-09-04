#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int zero=1, one=1;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'&&s[i+1]=='0'){
            zero++;
            if(one>=7){
               continue;
            }
            else{
                one=1;
            }
        }
        else if(s[i]=='1'&&s[i+1]=='1'){
            one++;
            if(zero>=7){
                continue;
            }
            else{
                zero=1;
            }
        }
        else{
            if(one>=7 || zero>=7){
               continue;
            }
            else{
                one=1;
                zero=1;
            }
        }

    }
    if(zero>=7 || one >=7){
        cout<<"YES";
    }
    else
        cout<<"NO";

}
