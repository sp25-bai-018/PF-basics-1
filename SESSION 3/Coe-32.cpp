#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	
	cout<<"Enter first value : ";
	cin>>n1;
	cout<<"Enter second value : ";
	cin>>n2;

	if ((n1>=20 && n1<=30) || (n2>=20 && n2<=30)){
		if(n1>n2){
			cout<<n1<<endl;
		}else{
			cout<<n2<<endl;
		}}else{
		cout<<false<<endl;
	}	
	
	return 0;
	
	
}