//
// Created by Carlos R. Arias on 2/28/22.
//

#ifndef BASIC_LINK_LIST_W22_LINKED_LIST_H
#define BASIC_LINK_LIST_W22_LINKED_LIST_H

#include <iostream>
using std::ostream;

class Node{
public:
    Node(int data = 0, Node* next = nullptr);
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* _head;
    size_t _size;
public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& other);
    const LinkedList& operator=(const LinkedList& rhs);

    bool AddToTop(int value);
    bool Remove(size_t position);
    size_t Size()const;
    int Get(size_t position)const;
    ostream& Write(ostream& output)const;
};


#endif //BASIC_LINK_LIST_W22_LINKED_LIST_H
