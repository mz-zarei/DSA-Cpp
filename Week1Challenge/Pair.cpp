// Create a class called Pair that has two public integer 
// member variables named "a" and "b", and 
// a public member function named sum() that has no arguments 
// but adds the two member variables together and returns their sum.


#include <iostream>
// define "Pair" class
class Pair {
  public:  // Public members:
    int a;
    int b;
    int sum();
}; 

// define "sum()"" function from "Pair" class
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