#include <iostream>
#include <string>

/*The CandyBar structure contains three members. The first member holds the brand
name of a candy bar. The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories (an integer
value) in the candy bar. Write a program that declares such a structure and creates a
CandyBar variable called snack , initializing its members to “Mocha Munch” , 2.3 , and
350 , respectively. The initialization should be part of the declaration for snack . Finally,
the program should display the contents of the snack variable.*/

using namespace std;


int main(){

struct snack{

  string name;
  double weight;
  int calories;

};

snack candyBar;

candyBar.name = "Mocha Munch";
candyBar.weight = 2.3;
candyBar.calories = 350;

cout << candyBar.calories << endl;

return 0;

}
