#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    int sum=0;
    cout<<"enter the value of x :"<<endl;
    cin>>x;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=pow(x,i);
        cout<<sum<<endl;;
    }
    
}