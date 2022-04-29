#ifndef _ProgClass_h
#define _ProgClass_h

#include <string>

// define the type of student 
#define std_N int
#define std_m double
#define std_name std::string

// class prog
class ProgClass{
    
public:
    ProgClass(std_name name, std_N studNum, std_m marks){
        this->name = name;
        this->marks = marks;
        this->studNum = studNum;
    }
    // get Name
    std::string getName();

    // set Name
    void setName(std::string name);

    // get number
    std_N getStudNum();

    // set number
    void setStudNum(std_N studNum);    

    // get mark 
    std_m getMarks();

    // set mark
    void setMarks(std_m marks);

    // std passed
    bool studPassed();
private:
    // name
    std_name name;

    // student nummber
    std_N studNum;

    // mark
    std_m marks;
};

#endif
