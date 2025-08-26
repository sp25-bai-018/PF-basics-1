#include<iostream>
using namespace std;
int main()
{
	string password;
	
	while(true){
			cout<<"Enter password : ";
	cin>>password;
	
	if(password=="1234"){
		cout<<"Correct password"<<endl;
		break;
	}else{
		cout<<"Enter again"<<endl;
	}
	}	
	
	return 0;
}