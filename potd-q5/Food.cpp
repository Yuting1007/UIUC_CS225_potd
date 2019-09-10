// Your code here
#include "Food.h"
#include <string>
using namespace std;

Food :: Food(){
    name_ = "banana";
    quantity_ = 107;
};

string Food :: get_name(){
    return name_;
}//function can be with no variables but including the class variables

void Food :: set_name(string name){
    name_ = name;
}

int Food :: get_quantity(){
    return quantity_;
}

void Food :: set_quantity(int quantity){
    quantity_ = quantity;
}// no retrun for void
