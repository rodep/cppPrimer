/*3. Write a C++ program that uses three user-defined functions (counting main() as one)
and produces the following output:

Three blind mice
Three blind mice
See how they run
See how they run

One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output. */

#include <iostream>
#include <conio.h>

using namespace std;

void blindMice(){
	cout << "Three blind mice" << endl;
}


void howTheyRun(){
	cout << "See how they run" <<endl;
}

int main(){

 blindMice();
 blindMice();
 howTheyRun();
 howTheyRun();

 getch();
 
 return 0;
}