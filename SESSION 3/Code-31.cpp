#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter positive integer : ";
	cin>>num;
	
	if(num<=0){
		cout<<"Enter positive integer"<<endl;
	}
	if((num%3==0) || (num%7==0)){
		cout<<true<<endl;
	}else{
		cout<<false<<endl;
	}
	return 0;
}