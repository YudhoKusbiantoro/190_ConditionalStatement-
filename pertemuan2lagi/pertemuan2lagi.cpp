// pertemuan2lagi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int nBilangan;
	string status;

	srand(time(0));

	nBilangan = rand() % 6;

	if (nBilangan % 2 == 0) {
		status = " Genap";

	}
	else {
		status = "Ganjil";

	}
	cout << "Bilangannya adalah" << nBilangan << endl;
	cout << "status = " << status << endl;
	return 0; 

	


}