//Pranav Saravanan Problem 3

#include <iostream>

using namespace std;

int main(){
  int hours;
  int overtime;
  double pay;

  cout << "Please enter week hours: ";
  cin >> hours;
  if(hours <= 40){
    pay = hours * 16;
  }
  else{
    pay = ((hours-40) * 16 * 1.5)+(40*16);
  }
  double ssTax = pay * 0.06;
  double fiTax = pay * 0.14;
  double siTax = pay * 0.05;
  double insurance = 10;

  double totalPay = pay - ssTax - fiTax - siTax - insurance;
  cout << "Net-home pay for the week: $" << totalPay << endl;
  return 0;
}
