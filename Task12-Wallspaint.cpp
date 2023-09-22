#include<iostream>
using namespace std;
main(){
	cout << "Number of square meter you can paint: ";
	int paint;
	cin >> paint;
	cout << "Width of the single wall (in meters): ";
	int w;
	cin >> w;
	cout << "Height of the single wall (in meters): ";
	int h;
	cin >> h;
	int walls;
	walls=paint/(w*h);
	cout << "Number of walls you can paint: "<< walls;
}
	
	


	

