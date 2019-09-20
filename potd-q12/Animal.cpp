// Animal.cpp
#include "Animal.h"
#include <string>
using namespace std;

Animal :: Animal(){
    type_ = "cat";
    food_ = "fish";
}

Animal :: Animal(string type, string food){
    type_ = type;
    food_ = food;
}
//有输出的时候才会吧type写在前面
//作为parameter输入的时候 则需要表明是什么type的params

string Animal :: getType(){
    return type_;
}

void Animal :: setType(string type){
    type_ = type;
}

string Animal :: getFood(){
    return food_;
}

void Animal :: setFood(string food){
    food_ = food;
}
//getter return with type
//setter void with type-params

string Animal :: print(){
     return "I am a " + type_;
}
//here, virtual keyword only appears at the header file
