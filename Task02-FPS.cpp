#include<iostream>
using namespace std;
main(){
	cout << "Number of Minutes: ";
	int min;
	cin >> min;
	cout << "Frames per second: ";
	int frame;
	cin >> frame;
	int totframe;
	totframe=(frame * 60)*min;
	cout << "Total Number of Frames: "<< totframe;
}
	