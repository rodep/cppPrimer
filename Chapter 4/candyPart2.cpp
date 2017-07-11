#include <iostream>
#include <string>

/*6. The CandyBar structure contains three members, as described in Programming Exercise
5. Write a program that creates an array of three CandyBar structures, initializes them to
values of your choice, and then displays the contents of each structure.*/

using namespace std;

struct candyBar{

string brand;
double weight;
int calories;
};

struct bass{

 string brand;
 string colour;
 int stringNumber;
};

int main() {

candyBar *bar = new candyBar[3];
bass *bassStore = new bass[3];

// candies

bar[0].brand = "Crunch";
bar[0].weight = 1.7;
bar[0].calories = 275;

bar[1].brand = "Heath";
bar[1].weight =  2.3;
bar[1].calories =  400;

bar[2].brand ="Rollo";
bar[2].weight = 2.5;
bar[2].calories =  350;

//basses

bassStore[0].brand = "Fender";
bassStore[0].colour = "blue";
bassStore[0].stringNumber = 4;

bassStore[1].brand = "Ibanez";
bassStore[1].colour = "brown";
bassStore[1].stringNumber = 6;

bassStore[2].brand = "Gianinni";
bassStore[2].colour = "red";
bassStore[2].stringNumber = 5;



//First bar in the candy bar display

cout << bar[0].brand << "\n";
cout << bar[0].weight << " ounces \n";
cout << bar[0].calories << "calories \n";

cout << "\n";
cout << "\n";

//Second bar in the candy bar display

cout << bar[1].brand << "\n";
cout << bar[1].weight << " ounces \n";
cout << bar[1].calories << "calories \n";

cout << "\n";
cout << "\n";

//Third bar in the candy bar display

cout << bar[2].brand << "\n";
cout << bar[2].weight << " ounces \n";
cout << bar[2].calories << "calories \n";

cout << "\n";
cout << "\n";

//First bass in the bassStore

cout << bassStore[0].brand << "\n";
cout << bassStore[0].colour << "\n";
cout << bassStore[0].stringNumber << " strings \n ";

cout << "\n";
cout << "\n";

//Second bass in the bassStore
cout << bassStore[1].brand << "\n";
cout << bassStore[1].colour << "\n";
cout << bassStore[1].stringNumber << " strings \n ";

cout << "\n";
cout << "\n";

//Third bass in the bassStore
cout << bassStore[2].brand << "\n";
cout << bassStore[2].colour << "\n";
cout << bassStore[2].stringNumber << " strings \n ";

cout << "\n";
cout << "\n";


delete [] bar;
delete [] bassStore;


return 0;

}
