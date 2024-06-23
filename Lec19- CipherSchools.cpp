

//Every element and values has assigned with some address..
// Every data type has some size... for ex. Int variabe has size of 4 bytes and in 1 bytes there 
//are total 4 bytes, so means total 32 bits is used ...
// in bits there 0 and 1 bits.. and these 2 bits can be arrange in 32 different ways. so total possible ways in which
// int data type can store values is 2*31....




#include<iostream>
using namespace std;
int main(){
	int a;
	float b;
	long long int c;
	
	b=2.80;
	a=32;
	c=1000;
	cout<<"Size of int variable a: "<<sizeof(a)<<endl;
	cout<<"Size of float variable b: "<<sizeof(b)<<endl;
	cout<<"Size of long long int  variable c : "<<sizeof(c)<<endl;
	return 0;
}
