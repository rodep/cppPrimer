#include <iostream>
#include <string>

/*

7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:

• The name of the pizza company, which can consist of more than one word
• The diameter of the pizza
• The weight of the pizza

Devise a structure that can hold this information and write a program that uses a struc-
ture variable of that type. The program should ask the user to enter each of the preced-
ing items of information, and then the program should display that information. Use cin
(or its methods) and cout .

 */

using namespace std;

struct pizzaAnalyser{

  string company;
  double diameter;
  double weight;
};


int main (){

  int controlPizzaDisplay = 0; //this just controls the pizza number display
  int numberOfPizzas = 0;
  string companyResponsible;
  double pizzaDiameter=0.0;
  double pizzaWeight=0.0;


  cout << "Please, insert the number of pizzas you want to analyse: " << "\n";
  cin >> numberOfPizzas;

  pizzaAnalyser *pizzas = new pizzaAnalyser[numberOfPizzas];
  cout << "... " << numberOfPizzas << " pizzas for analysis" << "\n\n";

  while(numberOfPizzas > 0){

  controlPizzaDisplay = controlPizzaDisplay + 1;

    cout << "Pizza "<< controlPizzaDisplay << " data " << "\n\n";
    cout << "Company responsible: ";
    cin >> companyResponsible;
    cout << "Pizza diameter: ";
    cin >> pizzaDiameter;
    cout << "Pizza weight: ";
    cin >> pizzaWeight;
    cout<< "\n\n";


    numberOfPizzas --;

}
  pizzas[0].company = companyResponsible;
  pizzas[0].diameter = pizzaDiameter;
  pizzas[0].weight =  230;


  return 0;
}
