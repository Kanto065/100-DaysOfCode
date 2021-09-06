#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n],sum[n],max=0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<n; i++){
        if(i==0){
            sum[i]=b[i];
        }
        else{
            sum[i] = (sum[i-1]-a[i])+b[i];
        }
    }

    for(int i=0; i<n; i++){
        if(sum[i]>max){
            max=sum[i];
        }
    }
    cout<<max<<endl;
}
