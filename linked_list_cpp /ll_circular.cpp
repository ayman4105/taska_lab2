#include"ll_circular.hpp"

Nodell::Nodell(int value) {
    data = value;
    next = nullptr;
}

CircularLinkedList::CircularLinkedList() {
    head = nullptr;
}

Nodell* CircularLinkedList::create_node(int value) {
    Nodell* new_node = new Nodell(value);
    return  new_node;
}

void CircularLinkedList::insert_at_head(int value) {
    Nodell* new_node = create_node(value);

    if (head == nullptr) {
        head = new_node;
        new_node->next = head;
        return;
    }

    Nodell* temp = head;

    while (temp->next != head) {
        temp = temp->next;
    }

    new_node->next = head;
    temp->next = new_node;
    head = new_node;
}

void CircularLinkedList::insert_at_tail(int value) {
    Nodell* new_node = create_node(value);

    if (head == nullptr) {
        head = new_node;
        new_node->next = head;
        return;
    }

    Nodell* temp = head;

    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->next = head;
}

void CircularLinkedList::delete_value(int key) {
    if (head == nullptr) return;

    Nodell* curr = head;
    Nodell* prev = nullptr;

    //  delete head node
    if (head->data == key) {
        // only one node
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        // find the last node
        Nodell* last = head;
        while (last->next != head) {
            last = last->next;
        }

        last->next = head->next;
        Nodell* del = head;
        head = head->next;
        delete del;
        return;
    }

    //  delete non-head node
    do {
        prev = curr;
        curr = curr->next;

        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return;
        }

    } while (curr != head);
}

void CircularLinkedList::reverse() {
    if (head == nullptr || head->next == head)
        return;

    Nodell* prev = nullptr;
    Nodell* curr = head;
    Nodell* next = nullptr;

    Nodell* last = head;

    // find the last node
    while (last->next != head) {
        last = last->next;
    }

    do {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } while (curr != head);

    head->next = prev;
    head = prev;
}

void CircularLinkedList::print_list() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Nodell* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}
