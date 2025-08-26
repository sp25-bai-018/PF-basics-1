#include<iostream>
using namespace std;
int main()
{
	double n1, n2;
	
	cout<<"Enter first value : ";
	cin>>n1;
	cout<<"Enter second value : ";
	cin>>n2;
	
	if(n2==0){
		cout<<"Division is not possible"<<endl;
	}else{
		double div= n1/n2;
		cout<<"Division = "<<div<<endl;
	}
	
	return 0;
}