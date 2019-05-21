#include <iostream>
#include <conio.h>
using namespace std;
  
int main()
{
	int i;
	double TempA[7], TempB[7], TempC[7];

	cout << "Input temperatures of Province A, B, and C for one week.\n\n"; 
	
		cout << "Province A: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": ";
		cin >> TempA[i];
	}
		cout << "Province B: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": ";
		cin >> TempB[i];
	}
		cout << "Province C: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": ";
		cin >> TempC[i];
	}

	//output all temp for a, b, and c
		cout << "Province A: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": " << TempA[i];
		cout << "\n";
	}
		cout << "Province B: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": " << TempB[i];
		cout << "\n";
	}
		cout << "Province C: \n";
	for ( i = 0; i < 7; i++ ){
		cout << "Day" << i + 1 << ": " << TempC[i];
		cout << "\n";
	}
	_getch();
	return 0;
}