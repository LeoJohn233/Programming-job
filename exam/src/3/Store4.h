#ifndef _Store4_h
#define _Store4_h
// some define first
#define tc template<class T>
#define tp template<typename T>

#include <iostream>

tc class Store4{

public:
    // _Store4
    Store4(T it1, T it2, T it3, T it4){
        this->it1 = it1;
        this->it2 = it2;
        this->it3 = it3;
        this->it4 = it4;
    }

    // set ites1
    void setItem1(T item){
        this->it1 = item;
    }

    // set ites2
    void setItem2(T item){
        this->it2 = item;
    }

    // set ites3
    void setItem3(T item){
        this->it3 = item;
    }

    // set ites4
    void setItem4(T item){
        this->it4 = item;
    }

    // get ites1
    T getItem1(){
        return this->it1;
    }

    // get ites2
    T getItem2(){
        return this->it2;
    }

    // get ites3
    T getItem3(){
        return this->it3;
    }

    // get ites4
    T getItem4(){
        return this->it4;
    }

    // print
    void print(){
        std::cout<<"items: "<<this->it1<<" "<<this->it2<<" "<<this->it3<<" "<<this->it4<<std::endl;
    }
private:
    // ites1
    T it1;
    // ites2
    T it2;
    // ites3
    T it3;
    // ites4
    T it4;
};

#endif
