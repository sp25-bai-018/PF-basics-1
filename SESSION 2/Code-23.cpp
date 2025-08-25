#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	
	cout<<"Input the first number : ";
		cin>>n1;
	cout<<"Input the second number : ";
		cin>>n2;
		
	if ( n1%n2 == 0 || n2%n1 == 0){
		cout<<"Multiples";
	} else{
		cout<<"Non-multiples";
	}
	
	return 0;
}