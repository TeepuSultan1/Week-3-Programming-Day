#include<iostream>
using namespace std;
main(){
	cout << "Enter Initial Velocity (m/s): ";
	int invel;
	cin >> invel;
	cout << "Enter Acceleration (m/s^2): ";
	int acc;
	cin >> acc;
	cout << "Enter Time (s): ";
	int tim;
	cin >> tim;
	int fivel;
	fivel=(acc*tim)+invel;
	cout << "Final Velocity (m/s): "<<fivel;
}