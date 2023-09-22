#include<iostream>
using namespace std;
main(){
	cout << "Enter a 4-digit number: ";
	int num;
	cin  >> num;
	int n01;
	n01=num/1000;
	int n2;
	n2=num%1000;
	int n03;
	n03=n2/100;
	int n4;
	n4=n2%100;
	int n05;
	n05=n4/10;
	int n6;
	n6=n4%10;
	int n07;
	n07=n6/1;
	int sum;
	sum=n01+n03+n05+n07;
	cout << "Sum of individual digits: "<<sum;
}
