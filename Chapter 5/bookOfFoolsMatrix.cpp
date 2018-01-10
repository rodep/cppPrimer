
/*Do Programming Exercise 4, but use a two-dimensional array to store input for 3 years
of monthly sales. Report the total sales for each individual year and for the combined
years.*/

#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main() {

int numberOfBooks = 0;
int totalOfSales = 0;
int yearSalesMonthly = 0;
string months[12] = {"January","February ","March ","April ","May","June","July","August","September","October","November","December"};



for(int year=0; year< 3; year++){

cout << "Type the year of monthly sales" << "\n" ;
cout << "---------------------------------------------" << "\n";
cin >> yearSalesMonthly;
cout << "\n";

     for(int i = 0; i < 12; i++){
       
        //why am I getting weird values the second time I iterate the month array?
        cout << "Please type the number of books sold in " << months[i] << ": ";
        cin >> numberOfBooks;
        months[i] = numberOfBooks;
        totalOfSales = totalOfSales + numberOfBooks;
        
        cout << "\n";

    }
        cout << "\n";
        cout <<" The total of books sold in the year " << yearSalesMonthly << " was: " << totalOfSales << "\n";
        totalOfSales = 0;
        cout << "\n";

        
}
 

    return 0;
}

