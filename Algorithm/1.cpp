#include <iostream>
int ktTrung(int s1, int s2){
    return s1!=s2 ?  s1+s2: (s1+s2)*3;
}
using namespace std;
int main(){
    int s1 ,s2;
    cout<<ktTrung(1,2)<<endl;
    cout<<ktTrung(3,1)<<endl;
    cout<<ktTrung(3,3);
    
}