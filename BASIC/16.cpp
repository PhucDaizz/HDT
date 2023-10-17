#include <iostream>
using namespace std;
int main(){
    cout<<"Calculate the volume of a cylinder :\n-----------------------------------------\nInput the radius of the cylinder :";
    int r,h;
    cin>>r;
    cout<<"Input the height of the cylinder :";
    cin>>h;
    cout<<"The volume of a cylinder is :";
    cout<<3.14*r*r*h;
}