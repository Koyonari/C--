#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node *next;

        Node(int val) {
            value = val;
            next = nullptr;
    } 
};

class LinkedList{
    private:
        Node *head;
        Node *tail;
        int length;

    public:
        // Constructor
        LinkedList(int value) {
            Node *newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        // Destructor
        ~LinkedList() {
            Node *temp = head;
            while (head) {
                head = head->next; // Head points to next node
                delete temp; // Deletes node
                temp = head; // Temp points to head
                // Loop continues until head is nullptr
            }
            // Confirmation
            cout << "Linked List Destroyed" << endl;
        }

        // Print List
        void printList() {
            Node *temp = head;
            cout << "List: ";
            while (temp) {
                cout << temp->value << " ";
                temp = temp->next;
            };
        }

        void getHead() {
            cout << "Head: " << head->value << endl;
        }

        void getTail() {
            cout << "Tail: " << tail->value << endl;
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

        int getSize() {
            return length;
        }

        // Append
        void append(int data){
            // Create new Node
            Node *n = new Node(data);

            // Case 1: Empty List
            if (length == 0){
                head = n;
                tail = n;
            } 
            // Case 2: Non-empty List
            else {
                tail->next = n;
                tail = n;
            }

            // Increase size as a new node has been added
            length++;
        }    

        // Pop
        void pop() {
            if (length == 0) return;
            Node *temp = head;
            Node *pre = head;
            while (temp->next) {
                pre = temp;
                temp = temp->next;
            }

            tail = pre;
            tail->next = nullptr;
            length--;
            if (length == 0) {
                head = nullptr;
                tail = nullptr;
            }
            delete temp;
        }
};

int main() {
    LinkedList *myLinkedList = new LinkedList(4);
    // Print List
    myLinkedList->printList();
    cout << endl;
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    
    // Append
    myLinkedList->append(5);
    myLinkedList->printList();
    cout << endl;
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    // Pop
    myLinkedList->pop();
    myLinkedList->printList();
    cout<< endl;

    delete myLinkedList;
}