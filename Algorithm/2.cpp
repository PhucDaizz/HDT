#include <iostream>

using namespace std;

int kt(int n)
        {
            const int x = 51;

            if (n > x)
            {
                return (n - x)*3;
            }
            return x - n;
        }
        
        
int main() 
 {
  cout << kt(53) << endl;  
  cout << kt(30) << endl;  
  cout << kt(51) << endl;  
  return 0;    
}