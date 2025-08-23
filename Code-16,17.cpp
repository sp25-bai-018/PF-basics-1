#include<iostream>
using namespace std;

int main()
{
	//problem 16
	
	int total, hrs, min, seconds;
	
	cout<<"Input seconds : ";
	cin>>total;
	
	hrs = total / 3600;
	total = total % 3600;
	
	min = total / 60;
	
	seconds = total % 60;
	
	cout<<"\nH:M:S -  "<<hrs<<":"<<min<<":"<<seconds;
	
	cout<<"\n\n**********************************************************";
	
	//problem 17
	
	int days, months, years, given;
	
	cout<<"\n\nInput the number of days : ";
	cin>>given;
	
	years = given / 365;
	given = given % 365;
	
	months = given / 30;
	
	days = given % 30;
	
	cout<<"Y:M:D - "<<years<<"-"<<months<<"-"<<days;
	
	return 0;
	
}