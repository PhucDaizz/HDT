#include <iostream>
using namespace std;
string hoandoi(string s){
    return s.length()<=1? s: 
        s.substr(s.length()-1)+s.substr(1,s.length()-2)+s.substr(0,1);
}
int main(){
    cout<<hoandoi("a")<<endl;
    cout<<hoandoi("dai")<<endl;
    cout<<hoandoi("nguyen")<<endl;
}