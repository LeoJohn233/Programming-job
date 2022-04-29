#ifndef _NumCheck_h
#define _NumCheck_h

#include <iostream>

class NumCheck{

public:
    // NumCheck
    NumCheck(int num){
        this->num = num;
    }

    // ~NumCheck
    ~NumCheck() {
        std::cout<<"This function will eventually be performed"<<std::endl;
    }

    // set Num
    void setNum(int num);

    // get Num
    int getNum();
private:
    int num;
};

#endif
