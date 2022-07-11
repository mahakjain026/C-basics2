#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==1 && b==1 || a==0 && b==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
}