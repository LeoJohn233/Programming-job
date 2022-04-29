#include "./NumCheck.h"

// get Num
int NumCheck::getNum(){
    return this->num;
}

// set Num
void NumCheck::setNum(int num){
    if (!num){
        throw "The Number Can Not to Be 0";
    }
    else{
        this->num = num;
    }
}

