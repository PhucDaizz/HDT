#include <iostream>
using namespace std;
int main(){
	int radius;
	float vol;
	cout<<"Calculate the volume of a sphere :\n";
	cout<<"---------------------------------------\n";
	
	cout<<"Input the radius of a sphere :";
	cin>>radius;
	vol = (3.14*radius*radius*radius*4)/3;
	
	cout<<"The volume of a sphere is :"<<vol;
	 
}
