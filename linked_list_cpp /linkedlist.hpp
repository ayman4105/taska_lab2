#pragma once

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::to_string;


class Node {
    public:
        int data;
        Node* next;

    Node(int value); 
};

class LinkedList {
private:
    Node* head;
    Node* create_node(int value);

public:
    LinkedList();
    void insert_at_head(int value);
    void insert_at_tail(int value);
    void insert_pos(Node** head , int data , int pos);
    int get_value(int key);
    int search_key_move_to_head(Node** head , int key);
    void delete_value(int key);
    void delete_list(Node** head);
    void print_list();
    void sum_elemnts(Node* head);
};






