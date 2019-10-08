#include <string>
#include <stack>

using namespace std;

// bool isValid(string input) {
//     stack<char> st;
//     for(unsigned i = 0; i < input.size(); i++){
//         char letter = input[i];
//         if(letter =='{'||letter=='['||letter=='('){
//             st.push(letter);
//             continue;//remind here, fill the stack first
//         }
//
//         if(!st.empty()){
//             //from the top of the stack, eliminate the left bracket
//             //put the order cannot be change, only the top one got eliminated, the rest can be consider
//             if(st.top()=='(' && letter ==')'){
//                 st.pop();
//             }
//             if(st.top()=='{' && letter =='}'){
//                 st.pop();
//             }
//             if(st.top()=='[' && letter ==']'){
//                 st.pop();
//             }
//             //if the front find pairs push the rest into stack
//             else if(letter == ')' || letter == ']' || letter == '}'){
//                 st.push(letter);
//             }
//         }
//         //if stack is empty
//         else if(letter == ')' || letter == ']' || letter == '}'){
//             st.push(letter);
//         }
//     }
//     return st.empty();
// }

bool isValid(string input) {
    stack<char> st;
    for (unsigned c = 0; c < input.size(); c++) {
    	char letter = input[c];
    	if (letter == '[' || letter == '(' || letter == '{') {
    		st.push(letter);
    		continue;
    	}
    	if (!st.empty()) {
    		if (st.top() == '[' && letter == ']') st.pop();
    		else if (st.top() == '(' && letter == ')') st.pop();
    		else if (st.top() == '{' && letter == '}') st.pop();
    		else if (letter == ']' || letter == ')' || letter == '}') st.push(letter);
    	}//remind here else if 
    	else if (letter == ']' || letter == ')' || letter == '}') st.push(letter);
    }
    cout << st.size() << endl;
    return st.empty();
}
