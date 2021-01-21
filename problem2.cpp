//Pranav Saravanan Problem 2

#include <iostream>

using namespace std;

int main(){

  int capacity;
  int people;

  cout << "Please enter the maximum capacity for the room: ";
  cin >> capacity;

  cout << "Please enter the number of people in the room: ";
  cin >> people;

  if(people <= capacity){
    int allowedPeople = capacity - people;
    cout << "It is legal to hold a meeting and " << allowedPeople<< " more people are allowed." << endl;
  }

  else{
    int extraPeople = people - capacity;
    cout << "The meeting cannot be held due to fire regulations and " << extraPeople << " people need to leave." << endl;
  }

  return 0;
}
