#include <iostream>
using namespace std;
	
int main(){
	int Mark;
	
	cout<<"Enter mark :";
	cin>>Mark;
	
	if(Mark>=50&&Mark<=100){
		
		cout<<"Pass"<<endl;
	}
	
	else if(Mark>=0&&Mark<50){
		cout<<"Fail"<<endl;
	}
	
	else{
		cout<<"invalid mark"<<endl;
	}
		return 0;
}