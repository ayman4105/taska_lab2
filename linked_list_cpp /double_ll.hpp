#pragma once

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

class Nodedu {
public:
    int data;
    Nodedu* next;
    Nodedu* prev;

    Nodedu(int value);
};

class DoublyLinkedList {
private:
    Nodedu* head;

    Nodedu* create_node(int value);

public:
    DoublyLinkedList();

    void insert_at_head(int value);
    void insert_at_tail(int value);
    void delete_value(int key);
    void reverse();
    void print_list();
};


