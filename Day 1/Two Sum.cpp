#include<iostream>
using namespace std;

int main(){
    int ar[5], target;
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    cout<<"target ";
    cin>>target;

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(ar[i]+ar[j]==target){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
}
