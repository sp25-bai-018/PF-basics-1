#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter an integer : ";
	cin>>num;
	
	if ( num<0 || num>80 ){
		cout<<"ERROR"<<endl;
	}	
	
	else if (num<=20){
		cout<<"Range [0,20]"<<endl;
	}
	
	else if (num<=40){
		cout<<"Range [21,40]"<<endl;
}

	else if (num<=60){
		cout<<"Range [41,60]"<<endl;
}

	else{
		cout<<"Range [61,80]"<<endl;
	}
	return 0;	
}
