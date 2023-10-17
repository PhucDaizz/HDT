#include <iostream>
using namespace std;
string kt(string s){
    return s.length() < 2? s: s.substr(0,2) +s.substr(0,2) +s.substr(0,2) +s.substr(0,2) ;
}
int main(){
    cout<<kt("hi")<<endl;
    cout<<kt("phuc")<<endl;
    cout<<kt("dai")<<endl;
}