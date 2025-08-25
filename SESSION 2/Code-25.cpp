#include<iostream>
using namespace std;
int main()
{
	int pos=0, neg=0, num;
	
	for (int i=1; i<=5; i++){
		cout<<"Enter the "<<i<<" number : ";
		cin>>num;
		cout<<endl;
		
		if( num>0 ){
			pos++;
		}else if( num<0 ){
			neg++;
		}
	}
	
	cout<<"Number of positive numbers : "<<pos<<endl;
	cout<<"Number of negative numbers : "<<neg<<endl;
	
	return 0;
}