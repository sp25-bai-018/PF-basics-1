#include<iostream>
using namespace std;
int main(){
	
	string chars = "XML";
	string reversed = "";
	for(int i = chars.length() - 1; i>=0; i--){
		reversed += chars[i];
	}
	
	cout<<"The reverse of XML is "<<reversed;
	
	return 0;
}