#pragma once 

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

class Nodell {
public:
    int data;
    Nodell* next;

    Nodell(int value);
};

class CircularLinkedList {
private:
    Nodell* head;

    Nodell* create_node(int value);

public:
    CircularLinkedList();

    void insert_at_head(int value);
    void insert_at_tail(int value);
    void delete_value(int key);
    void reverse();
    void print_list();
};

