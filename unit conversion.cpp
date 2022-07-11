#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value in cm : ";
    cin>>n;
    
    int unit;
    cout<<"Enter the unit in which you want to convert : 1 - m "<<endl<<"2 - inches "<<endl<<"3 - feet "<<endl<<"4 - mm  "<<endl;
    cin>>unit;

    switch(unit){
        case 1:
        cout<<n/100<<" m";
        break;
        case 2:
        cout<<n/2.54<<" inches" ;
        break;
        case 3:
        cout<<n/30.48<<" feet";
        break;
        case 4:
        cout<<n*10<<" mm";
        break;
        default:
        cout<<"enter the correct choice";
        break;
    }
}