// Nilai MTK dan Nilai Fisika.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 
int main()
{

	int nilaimatematika, nilaifisika, nrerata;
	string status;

	cout << "Masukan nilai Matematika : ";
	cin >> nilaimatematika;

	cout << "Masukan nilai fisika : ";
	cin >> nilaifisika;

	nrerata = (nilaimatematika + nilaifisika) / 2;

	if (nrerata < 60) {
		status = "Lulus ";
	}

	else if (nilaimatematika > 70) {
		status = " Lulus ";
	}
	else {
		status = " Tidak Lulus";

	}
	cout << "nilai MTK : " << nilaimatematika << endl;
	cout << "nilai FISIKA : " << nilaifisika << endl;
	cout << "Rata-rata :" << nrerata << endl;
	cout << "Statusnya adalah" << status << endl;
	return 0; 

} 


