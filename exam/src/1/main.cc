#include "./ProgClass.h"
#include <iostream>

// print data in progclass
void print_prog(ProgClass* prog);

int main(){
    // test
    ProgClass* prog = new ProgClass("pgupprtsc", 114514,1.114514);
    print_prog(prog);
    prog->setMarks(114514);
    prog->setName("ZhaoShuo");
    prog->setStudNum(10);
    print_prog(prog);
    system ("pause");
    return 0;
}

// print  data   in   progclass
void print_prog(ProgClass* prog) { 
    std::cout<<prog->getName()<<std::endl;

    std::cout<<prog->getStudNum()<<std::endl;

    std::cout<<prog->getMarks()<<std::endl;

    std::cout<<prog->studPassed()<<std::endl;
}

