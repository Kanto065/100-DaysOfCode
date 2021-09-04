#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n],y[n],z[n],a=0,b=0,c=0;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=0; i<n; i++){
        a+=x[i];
        b+=y[i];
        c+=z[i];
    }
    if(a!=0 || b!=0 || c!=0){
        cout<<"NO";
    }
    else
        cout<<"YES";
    cout<<a<<" "<<b<<" "<<c;
}
