#include<iostream>
using namespace std;
main(){
	cout << "Enter the movie name: ";
	string name;
	cin >> name;
	cout << "Enter the adult ticket price: $";
	float adult;
	cin >> adult;
	cout << "Enter the child ticket price: $";
	int child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int adultsold;
	cin >> adultsold;
	cout << "Enter the number of child tickets sold: ";
	int childsold;
	cin >> childsold;
	cout << "Enter the percentage of amount to be donated to charity: ";
	int charity;
	cin >> charity;
	int amountgen;
	amountgen=(adult*adultsold)+(child*childsold);
	cout << "Movie: "<<name<<endl;
	cout << "Total amount generated from ticket sales: $"<<amountgen<<endl;
	float donation;
	donation=((charity) * amountgen)/100;
	cout << "Donation to charity (" <<charity << "%): $"<< donation<<endl;
	float remain;
	remain=amountgen-donation;
	cout << "Remaining amount after donation: $"<<remain;

}
	
