#include <iostream>
using namespace std;
int main(){
    cout<<"Find the Area and Perimeter of a Rectangle :\n-------------------------------------------------\nInput the length of the rectangle : ";
    int d,r;
    cin>>d;
    cout<<"Input the width of the rectangle : ";
    cin>>r;
    cout<<"The area of the rectangle is : ";
    cout<<d*r<<endl;
    cout<<"The perimeter of the rectangle is : ";
    cout<<(d+r)*2;
}
