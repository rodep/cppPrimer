#include <iostream>

using namespace std;

/*Write a program that asks you to enter an automobile gasoline consumption figure in the
European style (liters per 100 kilometers) and converts to the U.S. style of miles per gallon.
Note that in addition to using different units of measurement, the U.S approach
(distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100
kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is about 12.4 l/100
km, and 27 mpg is about 8.7 l/100 km.*/

int main(){

 double miles;
 double gallons;
 double mpg;
 double kpl;

 cout << "Enter the Kilometer per liter: " << endl;
 cin >> kpl;

 mpg = kpl * 2.353;

 cout << kpl << " kilometers per liter is: " << mpg << " mpg" << endl;

 return 0;

}
