//
//  author: SongZihui
//  date: 2022-4-27
//  PlayerCharacteristics.cc
//
#include "./PlayerCharacteristics.h"

// get Name
ne_p PlayerCharacter::getName(){
    return this->name;
}

// set Name
void PlayerCharacter::setName(ne_p name){
    this->name = name;
}

// get Health
hlh_p PlayerCharacter::getHealth(){
    return this->health;
}

// set Health
void PlayerCharacter::setHealth(hlh_p health){
    this->health = health;
}

// get Attack
tk_p PlayerCharacter::getAttack(){
    return this->attack;
}

// set Attack
void PlayerCharacter::setAttack(tk_p attack){
    this->attack = attack;
}

// get defence
dfe_p PlayerCharacter::getDefence(){
    return this->defence;
}

// set defence
void PlayerCharacter::setDefence(dfe_p defence){
    this->defence = defence;
}

// printCharacter
void PlayerCharacter::printCharacter(){
    std::cout<<"Name"<<"\n"<<this->name<<"\n";
    std::cout<<"Defence"<<"\n"<<this->defence<<"\n";
    std::cout<<"Attack"<<"\n"<<this->attack<<"\n";
    std::cout<<"Health"<<"\n"<<this->health<<"\n";
}

