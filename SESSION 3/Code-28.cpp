#include<iostream>
using namespace std;
int main()
{
	int n1, n2, sum=0;
	
	cout<<"Enter first value : ";
	cin>>n1;
	cout<<"Enter second value : ";
	cin>>n2;
	
	sum= n1+n2;
	
	if(n1==n2){
		cout<<"Triple of Sum = "<<3*sum<<endl;
	}else{
		cout<<"Sum = "<<sum<<endl;
	}
	return 0;
}