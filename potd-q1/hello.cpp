/* Your code here! */
#include <iostream>
#include <string>
#include "hello.h"
using namespace std;

string hello(){
  int your_age = 24;
  string age = to_string(your_age);
  string your_name = "Yuting Du";
  string text = "Hello world! My name is " + your_name + " and I am " + age + " years old.";
  return text;
}
