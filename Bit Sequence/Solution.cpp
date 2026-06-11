#include<iostream>
using namespace std;
int main() {
    string bit;
    cin>>bit;
    int cnt0=0;
    int *prefixSum=new int[bit.length()+1];
    for(int i=0;i<=bit.length();i++){
        prefixSum[i]=0;
    }
    int j=1;
    int Max=0;
    for(int i=j;i<=bit.length();i++){
        if(bit[i-1] == '0'){
            cnt0++;
            Max=max(Max,min(cnt0,prefixSum[j-1]));
        }
        else{
            j=i;
            while(j<=bit.length()){
                if(bit[j-1] == '0' ){
                    break;
                }
                prefixSum[j]=prefixSum[j-1]+1;
                j++;
            }
            
                Max=max(Max,min(cnt0,prefixSum[j-1]));
                cnt0=0;
            
        }
    }
    cout<<2*Max<<" ";
}