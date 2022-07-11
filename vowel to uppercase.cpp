#include<iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int length=s.length();
    for(int i=0;i<length;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;

}