/*You sell the book C++ for Fools. Write a program that has you enter 
a year’s worth of monthly sales (in terms of number of books, not of money). 
The program should use a loop to prompt you by month, using an array of 
char * (or an array of string objects, if you prefer) initialized to the month strings
 and storing the input data in an array of int. Then, the program should find the sum of 
 the array contents and report the total sales for the year. (pag252 on Edge)*/
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
string month[12] = {"January","February ","March ","April ","May","June","July","August","September","October","November","December"};
int sales[12];
int sum = 0;
 
cout << "Enter sales for the month: " << endl;
 
for(int i = 0; i < 12; i++)
{
cout << month[i] << ": ";
cin >> sales[i];
sum=sum+sales[i];
};
 
cout << "Total sales for the year: " << sum << endl;
 
return 0;
} 

