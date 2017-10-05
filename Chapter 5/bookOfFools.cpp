/*You sell the book C++ for Fools. Write a program that has you enter 
a year’s worth of monthly sales (in terms of number of books, not of money). 
The program should use a loop to prompt you by month, using an array of 
char * (or an array of string objects, if you prefer) initialized to the month strings
 and storing the input data in an array of int. Then, the program should find the sum of 
 the array contents and report the total sales for the year. (pag252 on Edge)*/

#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main(){

    int numberOfBooks = 0;
    int totalOfSales = 0;
    int months[13];


    for(int i = 1; i < 13; i++){

        cout << "Please type the number of books sold in month " << i << ": " << "\n";
        cin >> numberOfBooks;
        months[i] = numberOfBooks;
        totalOfSales = totalOfSales + numberOfBooks;

    }git staus
        cout << "\n";
        cout <<"The total of books sold in the year was: " << totalOfSales;
    


    return 0;
}