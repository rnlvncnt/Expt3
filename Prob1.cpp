#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int i, e = 10;
	float total = 0, ave, input[10];

		cout << "Enter 10 elements: " << endl;
	for (i = 0; i < 10; i++){
		cin >> input[i];
	}
		cout << endl;
	for (i = 0; i < e; i++){
		total = total + input[i];
	}
		cout << "Total of 10 elements = " << total << endl;

		ave = total/10;
		cout << "The Average of 10 elements = " << ave << endl;

		for (i = 0; i < e; i++){
			if (input[0] > input[i])
			input[0] = input[i];
		}
		cout << "Smallest integer of 10 elements = " << input[0] << endl;
		
		for (i = 0; i < e; i++){
			if (input[0] < input[i])
			input[0] = input[i];
		}
		cout << "Largest integer: " << input[0];

	_getch();
	return 0;

}