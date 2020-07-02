/* 6. Design a structure called car that holds the following information about an automobile:
its make, as a string in a character array or in a string object, and the year it was built,
as an integer. Write a program that asks the user how many cars to catalog. The program
should then use new to create a dynamic array of that many car structures. Next, it
should prompt the user to input the make (which might consist of more than one word)
and year information for each structure. Note that this requires some care because it
alternates reading strings with numeric data (see Chapter 4). Finally, it should display
the contents of each structure. A sample run should look something like the following:

How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
Here is your collection:
1952 Hudson Hornet
1951 Kaiser  */

#include <iostream> 
#include <cstring> 
#include <cmath>

using namespace std;

struct car
{
string make;
int yearBuilt;

};

int main() {

int cars = 0;

cout << "How many cars do you wish to catalog? ";
cin >> cars;
cout << "\n";

/*Declare array as a pointer, allocate with new
To create a variable that will point to a dynamically allocated array, declare it as a pointer to the element type. For example,
int* a = NULL;  // pointer to an int, intiallly to nothing.*/  
//http://www.fredosaurus.com/notes-cpp/newdelete/50dynamalloc.html#:~:text=Declare%20array%20as%20a%20pointer,an%20int%2C%20intiallly%20to%20nothing.
car * dynamicArray = new car[cars];


//iterate through our dynamic array
for(int i = 0; i < cars; i++){

cout << "For car # "<< i+1 << endl;
cout << "Please enter the make: ";
cin >> dynamicArray[i].make;
cout << "Please enter the year made: ";
cin >> dynamicArray[i].yearBuilt;
}

//output our collection
cout << "Here is what is in your collection: " << endl;
for(int i = 0; i < cars; i++){
    cout << dynamicArray[i].yearBuilt << " "<< dynamicArray[i].make << endl;
}

//clean
delete [] dynamicArray;

return 0;

}