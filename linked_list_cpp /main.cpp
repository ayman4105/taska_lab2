#include"linkedlist.hpp"
#include"ll_circular.hpp"
#include"double_ll.hpp"


int main() {
    // CircularLinkedList list;

    // list.insert_at_head(10);
    // list.insert_at_head(20);
    // list.insert_at_tail(30);
    // list.insert_at_tail(40);

    // list.print_list();

    // list.delete_value(20);
    // list.print_list();

    // list.reverse();
    // list.print_list();

    DoublyLinkedList list;

    list.insert_at_head(10);
    list.insert_at_head(20);
    list.insert_at_tail(30);
    list.insert_at_tail(40);

    list.print_list();

    list.delete_value(20);
    list.print_list();

    list.reverse();
    list.print_list();

    return 0;
}