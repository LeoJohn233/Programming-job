#include "./Store4.h"
#include <string>

int main(){
    Store4<int>* s1 = new Store4<int>(1, 2, 3, 4);
    s1->print();
    Store4<bool>* s2 = new Store4<bool>(false, true, true, false);
    s2->print();
    Store4<std::string>* s3 = new Store4<std::string>("abc", "acb", "cba", "bca");
    s3->print();
    Store4<double>* s4 = new Store4<double>(1.1, 2.2, 3.3,4.4);
    s4->print();
    return 0;
}

