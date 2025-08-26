#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	
	cout<<"Enter first value : ";
	cin>>n1;
	cout<<"Enter second value : ";
	cin>>n2;
	
	cout<<"Numbers between "<<n1<<" and "<<n2<<" that gives 2 or 3 remainder when divided by 7 are : "<<endl;
	
	for(int i=n1; i<=n2; i++){
		if(i%7 == 2 || i%7 == 3){
			cout<<i<<endl;
		}
	}
	
	return 0;
}