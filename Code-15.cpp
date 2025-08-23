#include<iostream>
using namespace std;

int main()
{
	int amount;
	
	cout<<"Input the amount to be broken : ";
	cin>>amount;
	
	int notes[] = {100,50,20,10,5,2,1};
	int num;
	
	cout<<"The said amount is broken into: \n";
	
	for( int i=0; i<7; i++ ){
		num = amount / notes[i];
		amount = amount % notes[i];
		
		cout<<num<<" notes of "<<amount<<".00"<<endl;		
	}
	
	return 0;
}