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
    
//    address(const std::string& aCity, const std::string& aStreet, unsigned int aHouse, unsigned int aAppartment, unsigned int aIndex):
//    City { aCity }, Street { aStreet }, House { aHouse }, Appartment { aAppartment }, Index { aIndex} {}
};

void printAddress (struct address& Person)
{
    std::cout << "City: " << Person.City << '\n';
    std::cout << "Street: " << Person.Street <<'\n';
    std::cout << "House: " << Person.House << '\n';
    std::cout << "Appartment: " << Person.Appartment << '\n';
    std::cout << "Index: " << Person.Index << '\n';
    
}

int main(int argc, const char * argv[]) {
   
    int i = 0;
    address* newAddress = new address[i];
    
    newAddress[0].City = "Moscow";
    newAddress[0].Street = "Rodshelskaya";
    newAddress[0].House = 15;
    newAddress[0].Appartment = 1;
    newAddress[0].Index = 101010;
    
    newAddress[1].City = "Nizhny Novgorod";
    newAddress[1].Street = "Minina";
    newAddress[1].House = 1;
    newAddress[1].Appartment = 2;
    newAddress[1].Index = 600001;
    
    printAddress(newAddress[0]);
    std::cout << '\n';
    printAddress(newAddress[1]);
    
    delete [] newAddress;
    
    return 0;
}
