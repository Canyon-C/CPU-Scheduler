#include "Node.h"
#include <iostream>

template<typename T>
class CircularDLL {
public:
    int length;
    Node<T> *head;

    // Constructor
    CircularDLL() {
        length = 0;
    }

    // Destructor
    ~CircularDLL() {
        Node<T> *temp = head;
        while (head) {
            head = head->next;
            delete temp;T* data;
            temp = head;
        }
    }

    void printList() {
        int order = 1;
        Node<T> *temp = head;
        std::cout << order++ << ".  ";
        temp->data->print();
        temp = temp->next;
        while (temp != head) {
            std::cout << order++ << ".  ";
            temp->data->print();
            temp = temp->next;
        }
    }

    //Insert a process
    void insertProcess(T *data) {
        Node<T> *newNode = new Node<T>(data);
        if (length == 0) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
        } else {
            Node<T> *last = head->prev;
            newNode->next = head;
            newNode->prev = last;
            last->next = newNode;
            head->prev = newNode;

        }
        length++;
    }

    //Delete a Process
    void deleteProcess(Node<T> *todelete) {
        if (length == 0) {
            return;
        }
        if (head == todelete) {
            if (length == 1) {
                delete head;
                head = nullptr;
            } else {
                head->prev->next = head->next;
                head->next->prev = head->prev;
                Node<T> *temp = head;
                head = head->next;
                delete temp;
            }
        } else {
            todelete->prev->next = todelete->next;
            todelete->next->prev = todelete->prev;
            delete todelete;
        }
        length--;
    }
};
