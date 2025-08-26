#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter integer value : ";
	cin>>num;
	
	if((num>=90 && num<=110) || (num>=190 && num<=210)){
		cout<<true<<endl;
	} else{
		cout<<false<<endl;
	}
	return 0;
}