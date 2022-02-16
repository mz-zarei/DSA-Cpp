/**
 * @brief Comparing array and vectors in C++
 * @file arrayVersusVector.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <iostream>
#include <vector>

int main() {
    // Create a fixed size array
    int array1[5] = {1,2,3,4,5};
    int size1 = sizeof(array1)/sizeof(array1[0]); 

    // Create dynamic array
    //   option (1)
    std::vector<int> array2;
    array2.assign(array1, array1 + size1);
    //   option (2)
    // std::vector<int> array2;
    // for (unsigned int i = 0; i < size1; i++)
    // {
    //     array2.push_back(array1[i]);
    // }

    std::cout << "Capacity of vector: " << array2.capacity() << "\n";
    std::cout << "Size of vector: " << array2.size() << "\n";

    array2.push_back(6);

    std::cout << "Capacity of vector after adding new item: " << array2.capacity() << "\n";
    std::cout << "Size of vector after adding new item: " << array2.size() << "\n";
}