//
//  author: ZhaoShuo
//  number:202014240614
//  date: 2022-4-29
//  main.cc
//
#include "./PlayerCharacteristics.h"
#include <iostream>

int main(){
    PlayerCharacter* pPlayer = new PlayerCharacter("Cjji", 2005656, 1002121, 100565656);
    pPlayer->printCharacter();
    return 0;
}
