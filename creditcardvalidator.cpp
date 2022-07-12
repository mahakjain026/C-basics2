#include<bits/stdc++.h>
using namespace std;
bool isValid(int n[]){
    int sum=0;
    for(int i=0;i<16;i++){
        if((i)%2==0){
            n[i]*=2;
            if(n[i]>=10){
                int temp = n[i]%10;
                n[i]/=10;
                n[i]+=temp;
            }
        }
        sum+=n[i];
    }
    if(sum%10==0){
        return true;
    }
    return false;
}
int main(){
    int n[16];
    cout<<"Enter Card number ";
    for(int i=0;i<16;i++){
        cin>>n[i];
    }
    if(isValid(n)){
        cout<<"Valid Card number";
    }else{
        cout<<"Invalid Card number";
    }
    return 0;
}