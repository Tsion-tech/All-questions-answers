#include <iostream>
using namespace std;
	
int main(){
	
	 int numbers[5];   
    int sum ;      
    float average;    

    cout << "Enter 5 numbers:" << endl;

    
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    
    average = sum / 5; 

    cout << "The average of the numbers is: " << average << endl;

	
	
	
		return 0;
}