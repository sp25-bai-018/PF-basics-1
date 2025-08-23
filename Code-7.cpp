#include<iostream>
using namespace std;
int main()
{
	int days = 1329;
	
	int years = days/365;
	cout<<"Years : "<<years<<endl;
	
	days = days % 365;
	
	int weeks = days/7;
	cout<<"Weeks : "<<weeks<<endl;
	
	days = days % 7;
	cout<<"Days : "<<days;
	
	return 0;
}
