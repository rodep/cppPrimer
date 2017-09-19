#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	
	int number=0;
	int sum=0;
	int cont=0;	
	
    cout << "Type the number you want to cumulative sum. Type 0 to exit: "<< "\n";
    cin >> number;
    
    if(number == 0){
		cout << "Goodbye!";
	}

    else{
		
	  while(number != 0){
		  
		cout << "Type the number you want to cumulative sum. Type 0 to exit: "<< "\n";	
	    sum = sum + number;
	
	    cout << "Cumulative Sum: " <<  sum << "\n";
	    cin >> number;
	   
		
	  }
	
    }  
    
    
  
	return 0;
 }

