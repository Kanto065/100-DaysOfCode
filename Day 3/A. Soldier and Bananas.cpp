#include<iostream>
using namespace std;

int main(){
    int k, n, w, cost=0,borrow=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
        cost+= i*k;
    }

    if(n<cost){
        borrow=cost-n;
        cout<<borrow;
    }
    else
        cout<<0;
}
