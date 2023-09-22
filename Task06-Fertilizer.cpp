#include<iostream>
using namespace std;
main(){
	cout << "Enter the size of fertilizer bag in pounds: ";
	int size;
	cin >> size;
	cout << "Enter the cost of the bag: $";
	int cost;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin >> area;
	int costpound;
	int costfeet;
	costpound=cost/size;
	costfeet=cost/area;
	cout << "Cost of fertilizer per pond: $"<<costpound<<endl;
	cout << "Cost of fertilizing per square foot: $"<<costfeet;
}
	