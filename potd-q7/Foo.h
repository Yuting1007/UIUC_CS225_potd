#pragma once

#include <string>

namespace potd {
    class Foo {
        public:
            Foo(std::string);
            Foo(const Foo &);
            Foo & operator=(const Foo &);
            ~Foo();
            static int get_count();
            std::string get_name();
        private:
            static int count_;
            std::string name_;
    };//全部都没有命名, 先把data member都写出来
}
