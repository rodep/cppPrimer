/*factorial example from page 185- o calculate and store the first 16 factorials*/
  #include <iostream>
  #include <string>

  using namespace std;

  const int ArSize = 16;  // example of external declaration

  int main(){

  double factorials[ArSize];

  factorials[1] = factorials[0] = 1.0;

  int i =0;

  for (i = 2; i < ArSize; i++)
  factorials[i] = i * factorials[i-1];
  for (i = 0; i < ArSize; i++)
  cout << i << "! =" << factorials[i] << endl;

    return 0;
 }
