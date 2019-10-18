// Your code here
#include "potd.h"
#include <vector>

using namespace std;
int modulo = 5;
string getFortune(const string &s){
    int num_fortune = s.length() % modulo;
    if(num_fortune==0){
        return "As you wish!";
    }
    else if(num_fortune==1){
        return "Sorry I cannot answer that.";
    }
    else if(num_fortune==2){
        return "Don't ask me a question like that.";
    }
    else if(num_fortune == 3){
        return "Yes.";
    }
    return "I have no idea.";
}
