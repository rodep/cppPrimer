/* Daphne invests $100 at 10% simple interest. That is, every year, the investment earns
10% of the original investment, or $10 each and every year:

interest = 0.10 × original balance

At the same time, Cleo invests $100 at 5% compound interest. That is, interest is 5% of
the current balance, including previous additions of interest:

interest = 0.05 × current balance

Cleo earns 5% of $100 the first year, giving her $105. The next year she earns 5% of
$105, or $5.25, and so on. Write a program that finds how many years it takes for the
value of Cleo’s investment to exceed the value of Daphne’s investment and then displays
the value of both investments at that time.*/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 float calculateDaphneInterests(float investment)
{

    float interest = 0;

    interest = 0.10 * investment;

    return interest;
}

 float calculateCleoInterests(int investment)
{

    float interest = investment;

    interest = 0.05 * interest;

    return interest;
}

int main()
{ 
    float investmentDaphne = 0.0;
    float investmentCleo = 0.0;

    cout << "Type the investment in Daphne account: " << "\n";
    cin >> investmentDaphne; 
    cout << "\n";


    cout << "Type the investment in Cleo account: " << "\n";
    cin >> investmentCleo; 
    cout << "\n";

    

    return 0;
}