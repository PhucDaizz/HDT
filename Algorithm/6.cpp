#include <iostream>
using namespace std;
string xoa(string s, int n){
    return s.erase(n,1);
}

int main(){
    cout<<xoa("dai",2)<<endl;
    cout<<xoa("phuc",3)<<endl;
    cout<<xoa("nguyen",2)<<endl;

}