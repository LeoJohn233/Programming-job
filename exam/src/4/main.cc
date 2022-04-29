#include "./NumCheck.h"
#include <iostream>

int main(){
    NumCheck* n = new NumCheck(9999);
    try{
        n->setNum(0);
    }
    catch(const char* abc){
        std::cerr<<abc<<std::endl;
    }
    return 0;
}
