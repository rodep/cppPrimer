#include <iostream>
#include <conio.h>

using namespace std;

int main(){

int input = 0;
char c;

 cout << "write the distance in Furlongs:";
 cout << endl;
 cin >> input;
 cout << endl;

 input = input *220;

 cout << "The value of Furlongs in Yards is:   ";
 cout << input;
 cout << endl;

 cout << "Press any key to exit...";
 getch();
 cout << endl;
 
 return 0;

}