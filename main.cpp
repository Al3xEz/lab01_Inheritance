#include <iostream>
#include"Derived1.h"

struct Derived2 : Base {
    virtual void do_semothing() {
        cout << "Derived2!!!" << endl;
    }
};

// function main begins program execution
int main() {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main