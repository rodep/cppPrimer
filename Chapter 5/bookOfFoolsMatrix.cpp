
/*Do Programming Exercise 4, but use a two-dimensional array to store input for 3 years
of monthly sales. Report the total sales for each individual year and for the combined
years.*/

#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;

int main() {

int numberOfBooks = 0;
int totalOfSalesMonth = 0;
int totalSaleYears = 0;
int yearSalesMonthly = 0;

int salesByYear [13][4];
string months[12] = {"January","February ","March ","April ","May","June","July","August","September","October","November","December"};



for(int year=0; year< 3; year++){

cout << "Type the year of monthly sales" << "\n" ;
cout << "---------------------------------------------" << "\n";
cin >> yearSalesMonthly;
cout << "\n";

    
     for(int month = 0; month < 12; month++){

        cout << "Please type the number of books sold in " << months[month] << ": ";
        cin >> numberOfBooks;

        salesByYear[year][month] = numberOfBooks;
        totalOfSalesMonth = totalOfSalesMonth + numberOfBooks;
        
    }
        cout << "\n";
        cout <<"    The total of books sold in the year " << yearSalesMonthly << " was " << totalOfSalesMonth << "\n" << "\n";
        totalSaleYears = totalSaleYears + totalOfSalesMonth;
        totalOfSalesMonth = 0;

       totalSaleYears = totalSaleYears + totalOfSalesMonth;

}
 
cout << "--------------------------------------------" << "\n"; 
cout << "The total of books sold in all years is " << totalSaleYears << "\n" << "\n"; 



    return 0;
}

