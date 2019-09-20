//this is for the Base.h
#pragma once
// remember this to avoid redefinition


#include <string>
using namespace std;

class Base{
    public:
        //Base();
        virtual ~Base();
        string foo();
        string virtual bar();
};
//keywords after type name
//remember semicolon here
