#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,sum2=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;

    sort(a,a+n);

    for(int j=n-1; j>=0; j--){
        sum2+=a[j];
        count++;
        if(sum<sum2){
            break;
        }
    }
    cout<<count;

}
