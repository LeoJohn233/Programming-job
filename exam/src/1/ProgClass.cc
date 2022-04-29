#include "./ProgClass.h"

// get name
std::string ProgClass::getName(){
    return this->name;
}

// set Name
void ProgClass::setName(std::string name){
    this->name = name;
}

// get number
std_N ProgClass::getStudNum(){
    return this->studNum;
}

// set number
void ProgClass::setStudNum(std_N studNum){
    this->studNum = studNum;
}

// get mark 
std_m ProgClass::getMarks(){
    return this->marks;
}

// set mark
void ProgClass::setMarks(std_m marks){
    this->marks = marks;
}

// std passed
bool ProgClass::studPassed(){
    if(this->marks>=60)
        return true;
    return false;
}

