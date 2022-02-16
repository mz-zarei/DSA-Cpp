/**
 * @brief Pair class returns sum of two given integers
 * @file Pair.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */


#include <iostream>


class Pair {
  public:  // Public members:
    int a;
    int b;
    int sum();
}; 

// define sum() func. from Pair class
int Pair::sum() {
  return a + b;
}

// define main() function to test the class
int main() {
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}