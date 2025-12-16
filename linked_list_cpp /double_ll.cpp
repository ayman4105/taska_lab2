#include"double_ll.hpp"

Nodedu::Nodedu(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
}

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
}

Nodedu* DoublyLinkedList::create_node(int value) {
    return new Nodedu(value);
}

void DoublyLinkedList::insert_at_head(int value) {
    Nodedu* new_Nodedu = create_node(value);

    if (head == nullptr) {
        head = new_Nodedu;
        return;
    }

    new_Nodedu->next = head;
    head->prev = new_Nodedu;
    head = new_Nodedu;
}

void DoublyLinkedList::insert_at_tail(int value) {
    Nodedu* new_Nodedu = create_node(value);

    if (head == nullptr) {
        head = new_Nodedu;
        return;
    }

    Nodedu* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new_Nodedu;
    new_Nodedu->prev = temp;
}

void DoublyLinkedList::delete_value(int key) {
    if (head == nullptr)
        return;

    // delete head
    if (head->data == key) {
        Nodedu* del = head;
        head = head->next;

        if (head != nullptr)
            head->prev = nullptr;

        delete del;
        return;
    }

    Nodedu* temp = head;

    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }

    if (temp == nullptr)
        return;

    Nodedu* before = temp->prev;
    Nodedu* after = temp->next;

    before->next = after;

    if (after != nullptr)
        after->prev = before;

    delete temp;
}

void DoublyLinkedList::reverse() {
    if (head == nullptr)
        return;

    Nodedu* curr = head;
    Nodedu* prev_Nodedu = nullptr;

    while (curr != nullptr) {
        prev_Nodedu = curr->prev;
        curr->prev = curr->next;
        curr->next = prev_Nodedu;
        curr = curr->prev;
    }

    if (prev_Nodedu != nullptr)
        head = prev_Nodedu->prev;
}

void DoublyLinkedList::print_list() {
    Nodedu* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

}