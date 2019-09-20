#include <iostream>
#include <string>

#include "Square.h"

Square::Square() {
    name = "mysquare";
    lengthptr = new double;//注意这里pointer initialize的形式
    *lengthptr = 2.0;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
}
//the c-ctor will bulid up a copy of the ctor
//for all the variables
//if the variable is a pointer, I need to initialize it first with new on heap

Square::~Square() {
    delete lengthptr;
}
//destructor will delete the memory on heap to avoid memory leak

Square & Square :: operator = (const Square &other){
    //if(this == &other){
        //return (*this);
    //}
    delete lengthptr;
    //name not on heap no need to delete
    lengthptr = new double;
    *lengthptr = other.getLength();
    name = other.getName();
    return (*this);
}
//the assignment operation will bascially do the similar action with c-ctor
//but it need to clear(), that is the destructor first
Square Square :: operator + (const Square &other){
    Square *NewSquare = new Square();//这里也用的是pointer
    NewSquare -> setLength((this -> getLength()) + (other.getLength()));
    NewSquare -> setName((this -> getName()) + (other.getName()));
    return *NewSquare;
}
//no & here


void Square::setName(std::string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

std::string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}
