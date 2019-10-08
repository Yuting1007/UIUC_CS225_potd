#include "potd.h"
using namespace std;

// Your code here!
/** Returns the sum of elements between start to end.
	The value at start is included, while the value at end is not.
	*/
double sum(vector<double>::iterator start, vector<double>::iterator end){
    double sum = 0.0;
    for(vector<double>::iterator it = start; it < end; ++it){
        sum += *it;//kinda like a pointer, use * to "dereference"
    }
    return sum;
}
//delete all potd:: why?

vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end){
        vector<double>::iterator max = start;
        for(vector<double>::iterator it = start; it < end; ++it){
            if(*it > *max){
                max = it;
            }
        }
        return max;
}

void sort_vector(vector<double>::iterator start, vector<double>::iterator end){
    //use max_iter to find the max
    //put it front
    //cannot use recursive here
    for(vector<double>::iterator i = start; i != end; i++){//!= and <; it++ and ++it both work!
        vector<double>::iterator j = max_iter(i,end);
        if(*i < *j){
            double temp = *i;
            *i = *j;
            *j = temp;
            //modified here, replacement!
        }
    }
}
