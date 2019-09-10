// Your code here
#pragma once
#include <string>
using namespace std;

class Food {
    public:
        Food();//default ctor without curly brackets
        string get_name();
        void set_name(string name);
        int get_quantity();
        void set_quantity(int quantity);//set the type by self

    private:
        string name_;
        int quantity_;

};
