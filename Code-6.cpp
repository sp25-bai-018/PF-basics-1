#include<iostream>
using namespace std;
int main()
{
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;
	
	cout << "a + c = " << a + c << endl;              
    cout << "x + c = " << x + c << endl;
    cout << "dx + x = " << dx + x << endl;
    cout << "((int) dx) + ax = " << ((int) dx) + ax << endl;  
    cout << "a + x = " << a + x << endl;
    cout << "s + b = " << s + b << endl;
    cout << "ax + b = " << ax + b << endl;
    cout << "s + c = " << s + c << endl;
    cout << "ax + c = " << ax + c << endl;
    cout << "ax + ux = " << ax + ux << endl;
    
    return 0;
	
}