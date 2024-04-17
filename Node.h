//
// Created by canman on 2/14/2024.
//

#ifndef PROGRAM1_NODE_H
#define PROGRAM1_NODE_H


template <typename T> class Node {
public:
    T *data;
    Node<T> *next;
    Node<T> *prev;
    Node (T *data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
    void print () {
        data->print ();
    }
};


#endif //PROGRAM1_NODE_H
