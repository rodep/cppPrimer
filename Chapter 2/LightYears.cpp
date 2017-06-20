/*5. Write a program that has main() call a user-defined function that takes a distance in
light years as an argument and then returns the distance in astronomical units. The pro
gram should request the light year value as input from the user and display the result, as
shown in the following code:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.*/

#include <iostream>
#include <conio.h>

using namespace std;

double lightYearsConverterToAstronomicalUnits(double lightYears){
  // 1 light year = 63,240 astronomical units
  lightYears = lightYears * 63,240;

  return lightYears;

}
void interface() {

 double lightY = 0.0;
 cout << "Enter the number of light years: ";
 cout << endl;
 cin >> lightY;
 cout << lightY << " light years = "<< lightYearsConverterToAstronomicalUnits(lightY) << " astronomical units " << endl;
}

int main(){

interface();

}
