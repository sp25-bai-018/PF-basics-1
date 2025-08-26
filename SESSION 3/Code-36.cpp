#include<iostream>
using namespace std;
int main()
{
	int n1, n2, start, end, sum=0;
	
	cout<<"Input first number : ";
	cin>>n1;
	cout<<"Input second number : ";
	cin>>n2;
	
	if(n1 > n2){
		start=n2;
		end=n1;
	}else{
		start=n1;
		end=n2;
	}
	
	if(start%2 == 0){
		start++;
	}
	
	cout<<"List of odd numbers : "<<endl;
	for(int i=start; i<=end; i+=2){
		cout<<i<<endl;
		sum+=i;
	}
	
	cout<<"Sum = "<<sum<<endl;
	
	return 0;
}