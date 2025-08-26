#include<iostream>
using namespace std;
int main()
{
	int n1, n2, sum=0;
	
	cout<<"Enter first value : ";
	cin>>n1;
	cout<<"Enter second value : ";
	cin>>n2;
	
	sum=n1+n2;
	
	if(n1==30 || n2==30 || sum==30){
		cout<<true<<endl;
	} else{
		cout<<false<<endl;
	} 
	
	return 0;
}