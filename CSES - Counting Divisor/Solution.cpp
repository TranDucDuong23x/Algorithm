#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
   int n,T;
    cin>>T;
    while(T--){
        cin>>n;
        int cnt=0,Ex=0, Min=n/(int)sqrt(n);
        double Max=ceil(n/sqrt(n));
       short Limit=std::__gcd(Min,(int)Max);       
            if( Limit == (int)sqrt(n) && Limit!=1){
                Ex+=1;
            }
            for(int i=2;i<sqrt(n)-Ex;i++){
                if(n%i==0){
                    cnt+=2;
                }
            }
            if(n==1){
                cout<<Limit<<"\n";
            }
            else{
                cout<<cnt+2+Ex<<"\n";
            }
                
        }

    }
