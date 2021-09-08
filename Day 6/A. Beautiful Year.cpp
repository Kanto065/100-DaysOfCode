#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;; i++){
        n++;
        int a1=n/1000;
        int a2=n/100;
        a2=a2%10;
        int a3=n/10;
        a3=a3%10;
        int a4= n%10;

        if(a1!=a2&&a1!=a3&&a1!=a4&&a2!=a3&&a2!=a4&&a3!=a4){
            cout<<n;
            break;
        }

    }
}
