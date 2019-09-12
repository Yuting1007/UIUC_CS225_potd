
#include "Foo.h"
#include <string>

int potd::Foo::count_ = 0;

potd::Foo::Foo(std::string name) {
    this->name_ = name;
    potd::Foo::count_++;
}//开始有了名字, input的部分还是要有名字的; 用this指针开始做initialization

potd::Foo::Foo(const potd::Foo &that) {
    this->name_ = that.name_;
    potd::Foo::count_++;
}//copy ctor里面就是对variable copy

potd::Foo::~Foo() {
    potd::Foo::count_--;
}

potd::Foo & potd::Foo::operator=(const potd::Foo &that) {
    this->name_ = that.name_;
    potd::Foo::count_++;
    return *this;
}//operator 也是对variables进行copy 然后return *this

int potd::Foo::get_count() {
    return potd::Foo::count_;
}

std::string potd::Foo::get_name() {
    return name_;
}
