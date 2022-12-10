#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int n,i,j;
	cout<<"How many numbers letters are you going to enter?  ";
	cin>>n;
	char *ch = new char[n];
	int *numb = new int[n];
	for(i=0;i<n;i++) {
		cout<<"Enter letter and how many times it will be repeated: ";
		cin>>ch[i];
		cin>>numb[i];
		
	}
	for(i=0;i<n;i++) {
		for(j=0;j<numb[i];j++) {
			cout<<ch[i];
		}
	}
	delete []ch;
	delete []numb;
	
	
	
	
	return 0;
}
