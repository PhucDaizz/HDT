#include <iostream>

using namespace std;
string  test(string s){
    if (s.length() > 2 && s.substr(0,2)=="if" ){
        return s;
    }
    return "if "+s;
}
 
int main(){
    string s;
    cout<<test("if else")<<endl;
    cout<<test("else")<<endl;
    cout<<test("no")<<endl;
}