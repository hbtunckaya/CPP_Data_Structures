#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){

  string fullName;
  cout << "Type your full name: ";
  getline(cin, fullName);
  cout << "Your name is: " << fullName;

  return 0;
}