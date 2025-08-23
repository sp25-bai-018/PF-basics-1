#include<iostream>
using namespace std;

int main()
{
	int p,q,r,s;
	
	cout << "Input the first integer (even)      : ";
    cin >> p;
    cout << "Input the second integer (positive) : ";
    cin >> q;
    cout << "Input the third integer (positive)  : ";
    cin >> r;
    cout << "Input the fourth integer (positive) : ";
    cin >> s;
    
    if (p%2!=0){
    	cout<<"First integer should be even"<<endl;
	}
	
	if (q<=0 || r<=0 || s<=0){
		cout<<"The second,third and fourth integers should be positive"<<endl;
	}
	
	if (q>r && s>p && (r+s) > (p+q)){
		cout<<"\nCorrect values\n";
	} else{
		cout<<"\nWrong values";
	}
	
    return 0;   
}