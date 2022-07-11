#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of a matrix : ";
    cin>> n;
    int arr[n][n];

    cout<<"enter the value of matrix : ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr1[n][n];
    cout<<"Transpose of that matrix is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            arr1[i][j]=arr[j][i];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    int c[n][n]={0}; 
    cout<<"Multiplication of matrix and its transpose is : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=arr[i][k]*arr1[k][j];
            }

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


    
}