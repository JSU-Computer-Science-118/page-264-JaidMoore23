// Jaid Moore    J00905675  Due
//  main.cpp
//  Programming exercise chapter 4
// page 259 # 7
//  Created by Jaid Moore on 11/10/22.
// This code calculates the quadratic formuala and number of roots.

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int integer;
  cout << "Enter an integer between 1-1000" << endl;
  cin >> integer;
  if (integer <= 1|| integer > 1000)
  {
    cout<< "Out of Bounds" << endl;
  }
 else if (integer == 2 || integer == 3 || integer == 5 || integer == 7 ||
      integer == 11 || integer == 13 || integer == 17 ||
      integer == 19 | integer == 23 || integer == 29 || integer == 31)
    cout << "Number "<<integer << " "
         << "is prime!";
  else if (integer % 2 == 0 || integer % 3 == 0 || integer % 5 == 0 ||
           integer % 7 == 0 || integer % 11 == 0 || integer % 13 == 0 ||
           integer % 17 == 0 || integer % 19 == 0 || integer % 23 == 0 ||
           integer % 29 == 0 || integer % 31) {

    if (integer % 2 == 0) {
      cout << 2 << " ";
    }
    if (integer % 3 == 0) {
      cout << 3 << " ";
    }
    if (integer % 5 == 0) {
      cout << 5 << " ";
    }
    if (integer % 7 == 0) {
      cout << 7 << " ";
    }
    if (integer % 11 == 0) {
      cout << 11 << " ";
    }
    if (integer % 13 == 0) {
      cout << 13 << " ";
    }
    if (integer % 17 == 0) {
      cout << 17 << " ";
    }
    if (integer % 19 == 0) {
      cout << 19 << " ";
    }
    if (integer % 23 == 0) {
      cout << 23 << " ";
    }
    if (integer % 29 == 0) {
      cout << 29 << " ";
    }
    if (integer % 31 == 0) {
      cout << 31 << " ";
    }
  }
  
  else {
    cout << "Number " << integer << " "
         << "is prime";
  }

  return 0;
}
