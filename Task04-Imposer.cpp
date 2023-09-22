#include<iostream>
using namespace std;
main(){
	cout << "Enter Imposer Count: ";
	float i;
	cin >> i;
	cout << "Enter Player Count: ";
	float p;
	cin >> p;
	int impchance;
	impchance=(i/p)*100;
	cout << "Chance of being an imposer: "<<impchance<<"%";
}