/**
 * @brief Example of unordered_map and map data structures in C++
 * @file OrderedVsUnorderedMap.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <iostream>
#include <unordered_map>
#include <map>

int main () {
    // Unordered_map is based on Hash tables
    std::unordered_map <std::string, int> myUOM;

    // Ordered_map is based on a type of balanced tree
    std::map <std::string, int> myOM;

    // lookups and assignments can be done using the [] or "at" operator but if key doesn't exit, "at" gives error
    myUOM ["five"] = 5;
    std::cout << myUOM["five"] << std::endl;
    myOM ["five"] = 5;
    std::cout << myOM["five"] << std::endl;

    // Check how many keys there are before our query: 
    std::cout << "Map size: " << myUOM.size() << std::endl; 
    if (myUOM.count("five")) { 
        std::cout << "Found \"five\" in the map. Value: " << myUOM["five"] << std::endl; 
        } 
    else { 
        // In this conditional branch, no lookup operation with [] happens at all! 
        std::cout << "Did not find \"five\" in the map. The map is unchanged." << std::endl; 
        } 
    // Check how many keys there are at the end: 
    std::cout << "Map size: " << myUOM.size() << std::endl;

    // eliminate a key and its mapped value entirely
    myUOM.erase("five");
    std::cout << "Map size: " << myUOM.size() << std::endl;

    return 0;
    }


