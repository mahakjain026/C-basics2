#include<iostream>
using namespace std;
int main(){

    int m,n;
    cout<<"enter the size of array : ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int startrow=0 , startcolumn=0 , endrow=m-1 , endcolumn=n-1;

    while(startrow<=endrow and startcolumn<=endcolumn){

    for(int i=startcolumn ; i<=endcolumn ;i++){
        cout<<arr[startrow][i]<<" ";
    } 
    startrow++;

    for(int i=startrow ; i<=endrow ;i++){
        cout<<arr[i][endcolumn]<<" ";
    }
    endcolumn--;

    if(startrow<endrow){
    for(int i=endcolumn ; i>=startcolumn ;i--){
        cout<<arr[endrow][i]<<" ";
    }
    endrow--;
    }

    if(startcolumn<endcolumn){
    for(int i=endrow ; i>=startrow ;i--){
        cout<<arr[i][startcolumn]<<" ";
    }
    startcolumn++;
    }
}
}