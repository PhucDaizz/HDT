#include <iostream>
using namespace std;

bool kt (int x, int y){
    return x == 30 || y == 30 || (x + y == 30);
}

int main(){
    int a,b;
    cout<<kt(10,1)<<endl;
    cout<<kt(30,0)<<endl;
    cout<<kt(10,20)<<endl;
}