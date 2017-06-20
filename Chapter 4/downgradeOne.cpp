#include <iostream>
#include <cstring>

/*1. Write a C++ program that requests and displays information as shown in the following
example of output:
What is your first name? Betty Sue
What is your last name? Yew
What letter grade do you deserve? B
What is your age? 22
Name: Yew, Betty Sue
Grade: C
Age: 22
Note that the program should be able to accept first names that comprise more than one
word. Also note that the program adjusts the grade downward—that is, up one letter.
Assume that the user requests an A, a B, or a C so that you don’t have to worry about the
gap between a D and an F.*/

 using namespace std;

    int main() {

    char firstName[70];
    char lastName[70];
    string grade;
    int age;


     cout << "What is your first name? " ;
     cin.getline(firstName,70);
     cout << endl;

     cout << "What is your last name? ";
     cin >> lastName;
     cout << endl;

     cout << "What letter grade do you deserve? ";
     cin >> grade;
     cout << endl;

     cout << "What is your age? ";
     cin >> age;
     cout << endl;

     cout << "Name: " << firstName << ", " << lastName << endl;

     // downgrade algorithm
     if ( grade == "A" || grade == "a") {

       grade = "B";

     }
    else if( grade == "B" || grade == "b") {

       grade = "C";
     }

     cout << "Grade: " << grade << endl;
     cout << "Age: " << age << endl;
     cout << endl;

     return 0;


  }
