// your code here!
#include "potd.h"
#include <cmath>//cmath libaray
#include <iostream>
using namespace std;
/*
//mind the location of * , it is with the type "int"
int *potd :: raise (int * arr){

    //first get the size the input

    int size = 0;
    //count all the positive values
    while(arr[size]){
        size ++;
    }
    size --;
    // get the last one fit in
    //size ++;

    //cout << "the size of the array is " << size << endl;



    //unfunction!!why????
    // or, use the other way to get the size
    //type first!!!!

    int size = sizeof(*arr) / sizeof(arr[0]);
    cout << "the size of the array is " << size << endl;


    //Here!!!Attention!!!
    //since the pointer is also an object, we can apply slice option on it.
    //No need for redereference!!
    //Watch the rest of the code, all slice actions are applied on pointer.


    //then get a new array on heap with the same size
    //Here is an example without a class
    int *a = new int(size);
    for (int i=0; i < size; i++){
        if(i == size - 1 || i == size - 2){
            a[i] = arr[i];
        }
        else {
            a[i] = pow(arr[i],arr[i+1]);
        }
    }
    return a;

}

namespace potd {
	int* raise(int* arr) {
		int array_size = 0;
		while (arr[array_size] > 0) {
			array_size++;
		}
		array_size++;
		//cout << array_size << endl;
		int* new_array = new int(array_size);
		//cout << sizeof(new_array) / sizeof(new_array[0]) << endl;
		int current, next;
		for (int index = 0; index < array_size; index++) {
			current = arr[index];
			if (index == array_size - 1 || index == array_size - 2) {
				new_array[index] = current;
			}
			else {
				next = arr[index + 1];
				new_array[index] = pow(current, next);
			}
			//cout << new_array[index] << endl;
		}
		return new_array;
	}
}*/

namespace potd{
	int *raise (int *arr){

		int size = 0;
		while (arr[size]>0){
			size ++;
		}
		size ++;
		//int size = sizeof(*arr) / sizeof(arr[0]);
		cout << "the size of the array is " << size << endl;

		int * a = new int(size);

		//int curr,next
		for (int i = 0; i < size; i++){
			//int curr = arr[i];
			if (i == size -1 || i == size -2){
				a[i] = arr[i];
			}else{
				//next =arr[i+1];
				a[i] = pow(arr[i],arr[i+1]);
			}
		}
		return a;
	}

}
