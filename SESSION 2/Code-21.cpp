#include<iostream>
using namespace std;
int main()
{
	float n1, n2, n3, perimeter;
	
	cout<<"Input the first number : ";
		cin>>n1;
	cout<<"Input the second number : ";
		cin>>n2;
	cout<<"Input the third number : ";
		cin>>n3;
	
	if ((n1+n2>n3) &&(n2+n3>n1)&& (n1+n3>n2)){
		perimeter = n1+n2+n3;
		cout<<"Perimeter of triangle = "<<perimeter<<endl;
	} else{
		cout<<"This is not a valid triangle";
	}
	
	return 0;
	
}