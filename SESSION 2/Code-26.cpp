#include<iostream>
using namespace std;
int main()
{
	int pos=0, sum, num;
	
	for (int i=1; i<=5; i++){
		cout<<"Enter the "<<i<<" number : ";
		cin>>num;
		cout<<endl;
		
		if( num>0 ){
			pos++;
			sum+=num;
	}
}
	cout<<"Number of positive numbers : "<<pos<<endl;
	
	if( pos>0 ){
		float avg = (float) sum/pos;
		cout<<"Average of positive values = "<<avg<<endl;
	}else{
		cout<<"No positive numbers entered";
	}
		
	return 0;

}