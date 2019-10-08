#include "Queue.h"

// Queue::Queue() {
//     head_ = NULL;
//     tail_ = NULL;
// }
//
// // `int size()` - returns the number of elements in the stack (0 if empty)
// int Queue::size() const {
//     int count = 0;
//     Queue::Node* temp = head_;
//     while(temp!=NULL){
//         count+=1;
//         temp = temp->next;
//     }
//     return count;
// }
//
// // `bool isEmpty()` - returns if the list has no elements, else false
// bool Queue::isEmpty() const {
//     int count = 0;
//     Queue::Node* temp = head_;
//     while(temp!=NULL){
//         count+=1;
//         temp = temp->next;
//     }
//   return (count==0);
// }
//
// // `void enqueue(int val)` - enqueue an item to the queue in O(1) time
// void Queue::enqueue(int value) {
//     Queue::Node* insert = new Queue::Node();
//     insert->data = value;
//     //empty list
//     if(isEmpty()){
//         head_ = insert;
//         insert->next = NULL;
//         tail_= insert;
//     }
//     //not empty insert front
//     if(!isEmpty()){
//         insert->next=head_;
//         head_ = insert;
//     }
// }
//
// // `int dequeue()` - removes an item off the queue and returns the value in O(1) time
// int Queue::dequeue() {
//     //if isEmpty
//     if(isEmpty()){
//         return -1;
//     }
//     //remove from back
//     if(head_== tail_){
//         int temp = head_->data;
//         delete head_;
//         head_=NULL;
//         tail_=NULL;
//         return temp;
//     }
//     int temp = tail_->data;;
//     tail_= tail_->prev;
//     delete tail_->next;
//     tail_->next = NULL;
//     return temp;
// }
Queue::Queue(){

}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Queue::size() const{
    return v.size();
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const{
    return v.empty();
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value){
    v.insert(v.begin(),value);
}

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue(){
    if(isEmpty()){
        return -1;
    }else{
        int temp = v.back();
        v.pop_back();
        return temp;
    }
}
Queue::~Queue(){

};//modified here
