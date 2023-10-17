#include <iostream>
using namespace std;
int main(){
	cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
	cout << "--------------------------------------------------------------------\n";
	char gender = 'F';
	bool isEmployed = true;
	unsigned short son = 1;
	unsigned int salaryOfYear = 1500000;
	short yearOfAppt = 2009;
	double height= 79.48;
	float gpa = 4.69f;
	long totalDrawan = 12047235L;     
   	long long balance = 995324987LL;
   	
   	
	cout<<"The Gender is : "<<gender<<endl;
	cout<<"Is she married? : "<<isEmployed<<endl;
	cout<<"Number of sons she has : "<<son<<endl;
	cout<<"Year of her appointment : "<<yearOfAppt<<endl;
	cout<<"Salary for a year : "<<salaryOfYear<<endl;
	cout<<"Height is : "<<height<<endl;
	cout<<"GPA is "<<gpa<<endl;
	cout<<"Salary drawn upto : "<<totalDrawan<<endl;
	cout<<"Balance till : "<<balance<<endl;
		
	
	return 0;
}