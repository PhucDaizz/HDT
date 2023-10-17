#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"The number is : ";
	cin>>n;
	n++;
	cout<<"After post increment by 1 the number is : " << n <<endl;
	n++;
	cout<<"After pre increment by 1 the number is : "<<n<< endl;
	n++;
	cout<<"After increasing by 1 the number is : " << n <<endl;
	n--;
	cout<<"After post decrement by 1 the number is : "<<n <<endl;
	n--;
	cout<<"After pre decrement by 1 the number is : "<<n <<endl;
	n--;
	cout<<"After decreasing by 1 the number is : "<<n <<endl;
	return 0;
}