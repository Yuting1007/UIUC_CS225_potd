#include "Node.h"

/** Create a new node and add it to the list, while keeping the list sorted.
*/
// Node *insertSorted(Node *first, int data) {
//     // your code here
//     return NULL;
// }

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
// Node *listUnion(Node *first, Node *second) {
//     Node *out = NULL;
//
//     while (first != NULL) {
//         // your code here
//         // hint: call insertSorted and update l1
//     }
//
//     while (second != NULL) {
//         // your code here
//     }
//
//     return out;
// }

Node *listUnion(Node *first, Node *second) {

  	// your code here
	Node * result = NULL;

	Node * cur_result = result;
	bool flag;

	while (first != NULL) {
		flag = false;
		while (cur_result != NULL) {
			if ( first->data_ == cur_result->data_) {
				flag = true;
				break;
			}
			cur_result = cur_result->next_;
		}
		if (!flag) {
			Node * new_node = new Node();
			new_node->data_ = first->data_;
			new_node->next_ = result;
			result = new_node;
		}
		cur_result = result;
		first = first->next_;
	}
	while (second != NULL) {
		flag = false;
		while (cur_result != NULL) {
			if ( second->data_ == cur_result->data_) {
				flag = true;
				break;
			}
			cur_result = cur_result->next_;
		}
		if (!flag) {
			Node * new_node = new Node();
			new_node->data_ = second->data_;
			new_node->next_ = result;
			result = new_node;
		}
		cur_result = result;
		second = second->next_;
	}
	return result;
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
