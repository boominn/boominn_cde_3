#include <iostream>
#include <string.h>

using namespace std;


struct COURSE {
	double grade[100];
	string code[100];
};


int main() {
	int x=0,i;
	double sum=0,gradetemp;
	COURSE student;
	char ch='y';
	do {
		cout<<"Enter course code and grade: ";	
		cin>>student.code[x]>>student.grade[x];
		cout<<"Add new course? ";
		cin>>ch;
		x++;
		
	}while(ch=='y');

	cout<<"List of entered "<< x<<" courses"<<endl;
	for(i=0;i<x;i++) {
		cout<<"- "<<student.code[i]<<", Grade: "<<student.grade[i]<<endl;
	}
	for(i=0;i<x;i++) {
		sum=sum+student.grade[i];
	}
	cout<<"CGPA: "<<(sum/x);
	
	
	return 0;
}
