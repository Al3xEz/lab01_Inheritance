//
// Created by Al3x on 21/3/2022.
//

#include "Base.h"

Base::Base(string name_){
    name = name_;

}
Base::~Base()= default;

void Base::do_something() {cout<<"Hey! something is happening";}

void Base::setName(string name_){name = name_;}
string Base::getName(){return name;}

string Base::toString(){
    stringstream s;
    s<<"My name is "<< name << endl;

    return s.str();
}
