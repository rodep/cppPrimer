#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 /*--------------smaller number function-------------------------------*/

int smallerNumber (int fstNum, int scdNum){

  int smallerNum=0;

  if(scdNum - fstNum < 0) {
    smallerNum = scdNum;
   }
  else
  smallerNum = fstNum;

 return smallerNum;

 }
 
 /*--------------sucessor function-------------------------------------*/
 
 int sucessorSum(int fstNum, int scdNum){

  int cont=0;
  int sucessor=0;
  int sum=0;

  cont = fstNum - scdNum;
  cont = abs(cont);
  sum = smallerNumber(fstNum,scdNum);
  sucessor = smallerNumber(fstNum,scdNum);
  
  while(cont > 0) {

   sucessor = sucessor + 1;
   sum = sum + sucessor;

   cout << sum << "\n";

   cont --;

  }
    return sum;
 	 
 }
 
 /*--------------main function----------------------------------------*/
int main() {

  int firstNumber=0;
  int secondNumber=0;
  
  cout << "Typer first number : " << "\n";
  cin >> firstNumber;
  
  cout << "Type second number: " << "\n";
  cin >> secondNumber; 
  cout << "\n";
  
  cout <<"Cumulative sum is: " << "\n";
  sucessorSum(firstNumber,secondNumber);

}
