#include<iostream>
using namespace std;

int main(){
    int x,a;
    cin>>x;
    if(x%5==0){
        a=x/5;
    }
    else
        a=x/5 +1;
    cout<<a;
}
