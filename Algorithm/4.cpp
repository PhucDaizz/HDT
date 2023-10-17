#include <iostream>

using namespace std;

bool kt(int x)
        {
              if(abs(x - 100) <= 10 || abs(x - 200) <= 10)
                return true;
            return false;
        }
        
int main() 
 {
  cout << kt(103) << endl;  
  cout << kt(90) << endl;  
  cout << kt(89) << endl;  
  return 0;    
}