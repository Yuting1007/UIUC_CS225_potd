#pragma once

#include <cstddef>
#include <vector>

class Queue {
    public:
        int size() const;
        bool isEmpty() const;
        void enqueue(int value);
        int dequeue();
        ~Queue();
        Queue();
        std::vector<int> v;
        //begin(),back(),pop_back(),insert(location,value)
    // private:
    //     class Node{
    //     public:
    //         Node* next;
    //         Node* prev;
    //         int data;
    //     };
    //     Node* head_;
    //     Node* tail_;
};
