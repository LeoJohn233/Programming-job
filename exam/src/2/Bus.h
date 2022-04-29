#ifndef _Bus_h
#define _Bus_h

#include "./Vehicle.h"
#include <string>

class Bus : public Vehicle {
public:
    // call Vehicle
    Bus(std::string make, double price, int passengers): Vehicle(make, price), passenger(passengers){};


    // set Passengers
    void setPassengers(int passengers);

    // getPassengers
    int getPassengers();

    // print makes
    void horn();
private:
    // passenger
    int passenger;
};

#endif
