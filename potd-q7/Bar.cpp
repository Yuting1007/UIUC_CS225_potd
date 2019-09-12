// your code here
#include "Bar.h"
#include "Foo.h"
#include <string>

using namespace potd;
using namespace std;

//everytime you try to use the object in the class use this
Bar :: Bar(string name){
	Foo *new_foo = new Foo(name);//creates a new Foo
	this -> f_ = new_foo;//pointer's pointer, connect two class
}

Bar :: Bar(const Bar &source){
	string name = source.f_ ->get_name();
	Foo *new_foo = new Foo(name);
	this -> f_ = new_foo;
}
//for copy ctor, I need to copy all members in ctor, therefore a string variable called name should be generated
//the way I get this is to use the f_ which is a copy of new_foo from the Foo class to use the get_name();
//then, for whatever I did for my default ctor, did again

Bar :: ~Bar(){
	delete (this->f_);
}//destructor, delete the f_

Bar & Bar :: operator = (const Bar &b){
	delete(this -> f_);
	string name = b.f_ -> get_name();
	Foo *new_foo = new Foo(name);
	this -> f_ = new_foo;
	return *this;
}
//for operator =, do the same thing to initialize it
//and return *this

string Bar :: get_name(){
	return this -> f_ -> get_name();
}
