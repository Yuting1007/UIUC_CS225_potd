// your code here
#include "Food.h"
#include "q5.h"
#include <iostream>
using namespace std;

int main(){
    Food * f = new Food();
    cout << "You have " << f -> get_quantity() << "" << f -> get_name() << endl;
    increase_quantity(f);
    return 0;//main without void?
}
