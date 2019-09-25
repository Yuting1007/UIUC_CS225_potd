// Pet.h
#include "Animal.h"
#include <string>


class Pet : public Animal{
    private:
        std :: string name_;
        std :: string owner_name_;
        //std :: string type_;
        //type是Animal的private, 可以用Animal里面的getType()得到
        //std :: string food_; protected 可以继承

    public:
        //default ctor
        Pet();
        Pet(std :: string type, std :: string food, std :: string name, std :: string owner_name);
        //getter and setter
        std :: string getName();
        void setName(std :: string name);
        std :: string getFood();
        void setFood(std :: string food);
        std :: string getOwnerName();
        void setOwnerName(std :: string owner_name);
        //print function
        std :: string print();

};
