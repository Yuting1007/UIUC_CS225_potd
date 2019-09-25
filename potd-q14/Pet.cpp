// Pet.cpp

#include "Pet.h"
#include <string>

//default ctor
Pet :: Pet(){
    //std :: string name_ = "Fluffy";
    setType("cat");
    food_ = "fish";
    name_ = "Fluffy";
    owner_name_ = "Cinda";
}
//基本上在cpp里面定义过的不用写type
//那么哪里要写呢, 一个是parameter要写, 第一次申明
//有return的function

//customized ctor
Pet :: Pet(std :: string type, std :: string food, std :: string name, std :: string owner_name){
    //name_ = name;
    setType(type);
    owner_name_ = owner_name;
    name_ = name;
    food_ = food;
};

//getter and setter
std :: string Pet :: getFood(){
    return food_;
}

void Pet :: setFood(std :: string food){
    food_ = food;
}

std :: string Pet :: getName(){
    return name_;
}

void Pet :: setName(std :: string name){
    name_ = name;
}

std :: string Pet :: getOwnerName(){
    return owner_name_;
}

void Pet :: setOwnerName(std :: string owner_name){
    owner_name_ = owner_name;
}

//print function
std :: string Pet :: print(){
    return "My name is " + name_;
}
