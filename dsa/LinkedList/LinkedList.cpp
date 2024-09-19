#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList{
    private:
    Node *header;
    Node *tail;
    int size;

    public:
    LinkedList() {
        header = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize() {
        return size;
    }

    // LinkedList Append
    void append(int data){
        // Create new Node
        Node *n = new Node(data);

        // Case 1: Empty List
        if (header == NULL){
            header = n;
            tail = n;
        } 
        // Case 2: Non-empty List
        else {
            tail->next = n;
            tail = n;
        }

        // Increase size as a new node has been added
        size++;
    }

    // LinkedList Prepend
    
};

int main() {

}