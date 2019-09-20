// Animal.h
#include <string>
using namespace std;


class Animal {
    public:
        Animal();
        Animal(string type, string food);

        string getType();
        void setType(string type);
        string getFood();
        void setFood(string food);
        virtual string print();//can be overridden by derived class
    private:
        string type_;//only by this class
    protected:
        string food_;//this class and driven class
};
