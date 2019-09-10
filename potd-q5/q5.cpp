// your code here
#include "q5.h"
#include "Food.h"
#include <iostream>
using namespace std;

void increase_quantity(Food * f ){
//void is important and needed!!!
    int prev  = f -> get_quantity();
    //get and set both process under function,
    //use pointer to access and function them.
    int curr = prev + 1;
    f -> set_quantity(curr);
    cout << "You have " << f -> get_quantity() << "" << f -> get_name() << endl;
}
