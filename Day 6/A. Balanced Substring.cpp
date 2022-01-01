//Educational Codeforces Round 113 (Rated for Div. 2)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a=0,b=0;
        cin>>n;
        string s,s1,s2;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<s.size(); j++){
                string r= s.substr(i,j);

                for(int k=0; k<r.size(); k++){
                    if(r[k]=='a'){
                        a++;
                    }
                    else if(r[k]=='b'){
                        b++;
                    }
                    if(a==b){
                        cout<<i<<j<<endl;
                    }
                    else
                        cout<<-1<<-1;
                }
                break;
            }
            break;
        }
        break;
    }
}
