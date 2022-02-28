//
// Created by Carlos R. Arias on 2/28/22.
//

#include "linked_list.h"

LinkedList::LinkedList() {
    _head = nullptr;
    _size = 0;
}

LinkedList::~LinkedList() {
    // TODO
    if (_head != nullptr){
        Node* tmp = _head;
        for (int i = 0; i < _size; ++i) {
            _head = tmp->next;
            delete tmp;
            tmp = _head;
        }
    }

}

LinkedList::LinkedList(const LinkedList &other) {
    // TODO
}

const LinkedList &LinkedList::operator=(const LinkedList &rhs) {
    // TODO
}

bool LinkedList::AddToTop(int value) {
    Node* neo = new Node(value);
    if (_head == nullptr){
        _head = neo;
    }else{
        neo->next = _head;
        _head = neo;
    }
    _size++;
    return true;
}

bool LinkedList::Remove(size_t position) {
    if (position >= _size)
        return false;
    Node* tmp = _head;
    for (int i = 0; i < position - 1; ++i) {
        tmp = tmp->next;
    }
    Node* toRemove = tmp->next;
    tmp->next = tmp->next->next;
    toRemove->next = nullptr;
    delete toRemove;
    _size--;
    return true;
}

size_t LinkedList::Size() const {
    return _size;
}

int LinkedList::Get(size_t position) const {
    if (position >= _size)
        return -1;
    Node* tmp = _head;
    for (int i = 0; i < position; ++i) {
        tmp = tmp->next;
    }
    return tmp->data;
}

ostream &LinkedList::Write(ostream &output) const {
    for (Node* tmp = _head; tmp != nullptr; tmp = tmp->next) {
        output << tmp->data << "\t";
    }
    return output;
}

Node::Node(int data, Node *next) {
    this->data = data;
    this->next = next;

}
