#include<iostream>
using namespace std;
main(){
	cout << "Enter the number of sides of the polygon: ";
	int nofpolygon;
	cin >> nofpolygon;
	int sumofangles;
	sumofangles=(nofpolygon-2)*180;
	cout << "The sum of internal angles of a "<<nofpolygon<< "-sided polygon is: "<<sumofangles;
}
	