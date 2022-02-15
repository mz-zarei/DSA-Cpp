/**
 * @brief Example of creating a class on heap memory
 * @file Pair2.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <iostream>

// Pair class definition
class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    std::cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << std::endl;
  }
};

// function that creates an instance of Pair on the heap
Pair *pairFactory() {
  return new Pair;
}


int main() {
  Pair *p;
  p = pairFactory();
  
  // This same as
  // Pair *p = new Pair;
  
  // This function call should work without crashing:
  p->check();
  
  // Deallocating the heap memory. (Assuming it was made on the heap!)
  delete p;

  std::cout << "If you can see this text, the system hasn't crashed yet!" << std::endl;  

  return 0;
}
