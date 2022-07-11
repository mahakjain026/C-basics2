#include<iostream>
#include <string>
#include <limits>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
if(a.length()==b.length()){
return a<b;
}
else{
    return a.length()>b.length();
}
}

int main(){
    int n,i=0;

    cout<<"no. of strings  : ";
    cin>>n;
      cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    string s[n];

    for(i=0;i<n;i++){
    //    cout<<"i : "<<i<<endl;
        getline(cin,s[i]);
    }
    

    sort(s,s+n,compare);

    cout<<"sorted string is : ";
    for(i=0;i<n;i++){
       cout<<s[i]<<endl;
    }
    
}


