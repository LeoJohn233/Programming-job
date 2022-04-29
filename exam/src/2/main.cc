#include "./Bus.h"
#include "./Vehicle.h"
#include <iostream>

// print data
void print_class(Bus* b);

int main(int argc, char const *argv[]){
    Bus* b = new Bus("LeoJohn",1.5,200);
    print_class(b);
    b->horn();
    b->setMake("abcd");
    b->setPassengers(200);
    b->setPrice(1.5);
    print_class(b);
    b->horn();
    return 0;
}

// print data
void print_class(Bus* b){
    std::cout<<b->getPassengers()<<std::endl;
    std::cout<<b->getMake()<<std::endl;
    std::cout<<b->getPrice()<<std::endl;
}
