#include "./Bus.h"
#include <iostream>

// set Passengers
void Bus::setPassengers(int passengers){
    this->passenger = passengers;
}

// get Passengers;
int Bus::getPassengers(){
    return this->passenger;
}

// print makes
void Bus::horn(){
    std::cout<<"make:"<<this->getMake()<<std::endl;
}



