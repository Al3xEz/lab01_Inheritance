//
// Created by Al3x on 21/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

#include<iostream>
#include<sstream>
using namespace std;

class Base {

protected:
    string name;

public:
    Base(string = "");
    ~Base();
    virtual void do_something();

    void setName(string);
    string getName();

    string toString();
};


#endif //LAB01_INHERITANCE_BASE_H
