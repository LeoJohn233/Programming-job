#ifndef _Vehicle_h
#define _Vehicle_h

#include <string>

class Vehicle{

public:
    // Vehicle
    Vehicle(std::string make, double price){
        this->make = make;
        this->price = price;
    }

    // get Make
    virtual std::string getMake();

    // set Make
    virtual void setMake(std::string make);

    // get Price()
    virtual double getPrice();

    // set Price
    virtual void setPrice(double price);
private:
    // make
    std::string make;

    // price
    double price;
};

#endif
