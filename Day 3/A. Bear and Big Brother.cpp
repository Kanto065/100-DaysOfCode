#include<iostream>
using namespace std;

int main(){
    int a, b,i;
    cin>>a>>b;
    for(i=1;;i++){
        a*=3;
        b*=2;
        if(a>b)
            break;
    }
    cout<<i;




/*own approch
    for(int i=1; i<=10; i++){
        if(i==1){
            x=a*3;
            y=b*2;
            if(x>y){
            cout<<i;
            break;
            }
        }
        x=x*3;
        y=y*2;
        //cout<<x<<" "<<y<<endl;
        if(x>y){
            cout<<i+1;
            break;
        }
    }
    //cout<<a<<" "<<b<<endl;
*/
}
