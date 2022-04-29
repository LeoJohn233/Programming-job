//
//  author: SongZihui
//  date: 2022-4-27
//  PlayerCharacteristics.h
//
#ifndef PlayerCharacteristics_h
#define PlayerCharacteristics_h

#include <string>
#include <fstream>
#include <iostream>

#define hlh_p int
#define tk_p int
#define dfe_p int
#define ne_p  std::string

class PlayerCharacter{

public:
    // PlayerCharacteristics
    PlayerCharacter(){
        this->name = "";
        this->attack = 0;
        this->defence = 0;
        this->health = 0;
        try{
            this->toFile();
        }catch(const char* msg){
            std::cerr<<msg << std::endl;
        } 
    }

    // overload
    PlayerCharacter(ne_p name, hlh_p health, tk_p attack, dfe_p defence){
        this->name = name;
        this->health = health;
        this->attack = attack;
        this->defence =defence;
        try{
            this->toFile();
        }catch(const char* msg){
            std::cerr<<msg << std::endl;
        } 
    }

    // ~PlayerCharacter()
    ~PlayerCharacter(){
        this->name = "";
        this->attack = 0;
        this->defence = 0;
        this->health = 0;
    }

    // get Name
    ne_p getName();

    // set Name
    void setName(ne_p name);

    // get Health
    hlh_p getHealth();

    // set Health
    void setHealth(hlh_p health);

    // get Attack
    tk_p getAttack();

    // set Attack
    void setAttack(tk_p attack);

    // get defence
    dfe_p getDefence();

    // set defence
    void setDefence(dfe_p defence);

    // printCharacter
    void printCharacter();

    // tofile
    void toFile(){
        std::ofstream in("saveFile.txt");
        if (in){
            in<<"Name:"<<"\n"<<this->name<<"\n";
            in<<"Defence:"<<"\n"<<this->defence<<"\n";
            in<<"Attack:"<<"\n"<<this->attack<<"\n";
            in<<"Health:"<<"\n"<<this->health<<"\n";
            in.close();
        }
        else{
            throw "CREAT FILE ERROR!";
        }
    }
private:
    // name
    ne_p name;

    // health
    hlh_p health;

    // attack
    tk_p attack;

    // defence
    dfe_p defence;
};

#endif
