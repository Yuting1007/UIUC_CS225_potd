#include <iostream>
#include <string>

#include "Food.h"

Food::Food() {
  name_ = "food";
  quantity_ = 0;
}

void Food::setName(std::string newName) {
  name_ = newName;
}

void Food::setQuantity(int newQuantity) {
  quantity_ = newQuantity;
}

std::string Food::getName() const {
  return name_;
}

int Food::getQuantity() const {
  return quantity_;
}

void increaseQuantity(Food * food) {
    (*food).setQuantity((*food).getQuantity() + 1);
}

//bool operator>(const Food & that) const
//find this in food.h
// > assignment is required
// bool Food :: operator>(const Food &that) const{
//     if(quantity_ > that.quantity_){
//         return true;
//     } else {
//         return false;
//     }
// } wrong!! cctor without args, default value will not change, no meaning
//use this -> getQuantity instead

bool Food :: operator>(const Food &other) const{
    if(this -> getQuantity() > other.getQuantity()){
        return true;
    } else {
        return false;
    }
}
