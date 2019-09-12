// your code here
#include "Foo.h"
#include <string>

using namespace std;

namespace potd{
	class Bar{
		public:
			Bar(string);//a constructor that takes string
			Bar(const Bar &);//a copy constructor
			~Bar();//destructor
			Bar & operator = (const Bar &);//an operator =
			string get_name();//a string member function

		private:
			Foo * f_;	
	};
}
