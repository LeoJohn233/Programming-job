#include "./Vehicle.h"

// get Make
std::string Vehicle::getMake(){
    return this->make;
}

// set make
void Vehicle::setMake(std::string make){
    this->make = make;
}

// get price
double Vehicle::getPrice(){
    return this->price;
}

// set Price
void Vehicle::setPrice(double price){
    this->price = price;
}

