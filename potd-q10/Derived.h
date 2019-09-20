#pragma once
//remember this!!

#include "Base.h"
#include <string>
using namespace std;

class Derived : public Base{
    public:
        //Derived();
        virtual ~Derived();
        string foo();
        string bar();
};
//subclass syntax
