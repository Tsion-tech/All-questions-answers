#include <iostream>
using namespace std;
	
int main(){
	
	int num[5];
	int large;
	
	cout<<"Enter five numbers :"<<endl;
	
	
	for(int i=0; i<5; i++){
		
		cin >> num[i];}
		 
		 large = num[0];
		 
		 for(int i=1;i<5;i++){
		 	
		 	
		 if (num[i] > large) {
            large = num[i]; 
        }	
	}
			 cout << "The largest number in the array is: " << large<< endl;
		 
	

		return 0;
}