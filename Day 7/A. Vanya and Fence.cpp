#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, a, count=0;
    cin>>n>>h;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<=h){
            count++;
        }
        else if(a>h){
            count+=2;
        }
    }
    cout<<count;

}
