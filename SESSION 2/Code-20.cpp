#include<iostream>
using namespace std;
int main()
{
	int num, sum=0;
	
	for (int i=1; i<=5; i++){
		cout<<"Input the "<<i<<" number : ";
		cin>>num;
		
			if (num%2 !=0){
		sum+=num;
	}}

	cout<<"\n\nSum of all odd numbers enetered = "<<sum;
	
	return 0;
	
}