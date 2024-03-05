// pertemuan2lagilagi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int nBilanganA;
	int nBilanganB;
	string status;

	srand(time(0));

	nBilanganA = rand() % 6;
	nBilanganB = rand() % 2;

	if (nBilanganA == nBilanganB) {
		status = "sama besar";

	}
	else if  (nBilanganA > nBilanganB) {
		status = "Bilangan A lebih besar dari Bilangan B";

	}
	else {
		status = "Bilangan A lebih kecil dari Bilangan B";

	}

	cout << "Bilangan Pertama adalah " << nBilanganA << endl;
	cout << "Bilangan kedua adalah " << nBilanganB << endl;
	cout << "statusnya adalah =  " << status << endl;
	return 0;

}
