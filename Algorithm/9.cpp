#include <iostream>
using namespace std;
string thaythe(string s){
    string ktCuoi = s.substr(s.length() -1);
    return ktCuoi+s+ktCuoi;
}
int main(){
  cout << thaythe("Red") << endl;  
  cout << thaythe("Green") << endl;  
  cout << thaythe("1") << endl;  
  return 0;    
}