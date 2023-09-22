#include<iostream>
using namespace std;
main(){
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegprice;
	cin >> vegprice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruprice;
	cin >> fruprice;
	cout << "Enter total kilograms of vegetables: ";
	float vegkg;
	cin >> vegkg;
	cout << "Enter total kilograms of fruits: ";
	float frukg;
	cin >> frukg;
	float earncoin;
	earncoin=(vegkg*vegprice)+(frukg*fruprice);
	float earnrps;
	earnrps=(1/1.94)*earncoin;
	cout << "Total earnings in Rupees (Rps): "<< earnrps;
}