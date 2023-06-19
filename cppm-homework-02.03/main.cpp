//
//  main.cpp
//  cppm-homework-02.03
//
//  Created by a1ex on 6/17/23.
//

#include <iostream>
#include <string>

struct address
{
    std::string City;
    std::string Street;
    unsigned int House;
    unsigned int Appartment;
    unsigned int Index;
};

void printAddress (struct address Person)
{
    std::cout << "City: ";
    std::cin >> Person.City;
    std::cout << "Street: ";
    std::cin >> Person.Street;
    std::cout << "House: ";
    std::cin >> Person.House;
    std::cout << "Appartment: ";
    std::cin >> Person.Appartment;
    std::cout << "Index: ";
    std::cin >> Person.Index;
}
int main(int argc, const char * argv[]) {
   
    int i = 2;
    address* newAddress = new address[i];
    
    printAddress(newAddress[0]);
    std::cout << '\n';
    printAddress(newAddress[1]);
    
    delete [] newAddress;
    
    return 0;
}
