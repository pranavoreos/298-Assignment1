//Pranav Saravanan Problem 1

#include <iostream>

using namespace std;

int main(){
  double weightOunces;
  double weightTons;
  int boxes;

  cout << "Please enter the weight in ounces: ";
  cin >> weightOunces;

  weightTons = weightOunces/35273.92;

  boxes = 35273.92/weightOunces;

  cout << "Weight in tons: " << weightTons << endl;
  cout << "Boxes Required: " << boxes << endl;

  return 0;
}
