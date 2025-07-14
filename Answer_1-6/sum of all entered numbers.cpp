#include <iostream>
using namespace std;
	
int main(){
	
	int num;
	int sum = 0;

	
		cout<<"Enter numbers :"<<endl;
		cin>>num;
		
	while(num!=0){
	
		cout<<"Enter numbers :"<<endl;
		cin>>num;
		sum += num;
		
		cout<<"The sum of all entered numbers is :"<<sum<<endl;
	}
	
	return 0;
}