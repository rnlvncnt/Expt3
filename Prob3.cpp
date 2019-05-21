#include <iostream>
#include <conio.h>
using namespace std;
  
int main()
{
    int input1[500], output1[500], j, i;
    char input2[500], output2[500];  
    cout << "Enter number of elements: ";
    cin >> j;
     
    cout << "Enter " << j << " numbers and letters \n";
      
    for(i = 0; i < j; i++){
        cin >> input1[i];
    }
	for(i = 0; i < j; i++){
        cin >> input2[i];
	}
    for(i = 0; i < j; i++){
        output1[i] = input1[j - i - 1];
    }    
	 for(i = 0; i < j; i++){
        output2[i] = input2[j - i - 1];
    }    
    cout << "Reversed Elements: \n";
    for(i = 0; i < j; i++){
        cout << output1[i] << ", ";
		cout << output2[i] << ", ";
    }
    _getch();      
    return 0;
}