#include<iostream>
using namespace std;
int main()
{
	int sum=0, odd, num;
	
	for (int i=1; i<=5; i++){
		cout<<"Enter the "<<i<<" number : ";
		cin>>num;
		cout<<endl;
		
		if( num%2!=0 ){
			odd++;
			sum+=num;
	}
}
	cout<<"Sum of all odd values = "<<sum<<endl;
	
		
	return 0;

}