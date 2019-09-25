#include "potd.h"
#include <iostream>
#include <string>

// using namespace std;
//
// string stringList(Node *head) {
//     // your code here!
//     //create a curr pointer
//     Node *curr = head;
//     if(curr == NULL){
//         return "Empty list";
//     }
//     string output = ""; //modified here
//     int index = 0; //modified here
//     while (curr != NULL){
//         // int index = 0;
//         output += ("Node " + to_string(index) + ": " + to_string(curr ->data_));//modified here, with parenthese
//         index++;//modified here
//         curr = curr -> next_;//modified here, if the next is not empty, "->" is needed
//         if(curr != NULL){
//             output += " -> ";//remember this syntax
//         }
//         // index ++;
//     }
//     return output;
// }


using namespace std;
string stringList (Node *head){
    //a curr pointer is needed!!!!!
    Node *curr = head;
    if(curr == NULL){
        return "Empty List";
    }
    string output ="";
    int index = 0;
    while(curr != NULL){
        // string output = "";
        // int index = 0;
        //modified here, 这两个declare要写在else if条件外面
        output += "Node " + to_string(index) + ": " + to_string(curr -> data_);
        index++;
        curr = curr -> next_;
        // index++;
        if(curr != NULL){
            output += " -> ";
        }
        // index++;
    }
    return output;
}
