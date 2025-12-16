#include"linkedlist.hpp"



Node :: Node(int value){
        data = value;
        next = nullptr;
}

LinkedList::LinkedList(){
        head = nullptr;
}

Node* LinkedList:: create_node(int value){
        Node* new_node = new Node(value);
        return  new_node;
}



void LinkedList::insert_at_head(int value){
        Node* new_node = create_node(value);
        new_node->next = head;
        head = new_node;        
}



void LinkedList::insert_at_tail(int value){
        Node* new_node = create_node(value);
        //check ll is empty 
        if(head == nullptr){
            head = new_node;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = new_node;
        }
}


int LinkedList::get_value(int key){
        Node* temp = head;
        while(temp->next != nullptr){
            if(temp->data == key){
                return key;
            }
            temp = temp->next;
        }
        return -1;
}


void LinkedList::delete_value(int key){
    if (head == nullptr){
        return;
    }    

    if (head->data == key) {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key){
        temp = temp->next;
    }

    if (temp->next == nullptr){
        return;
    }

    else{
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
    }    
}


void LinkedList::print_list(){
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}


void LinkedList::delete_list(Node** head){
    Node* temp;
    while(*head){
        temp = *head;
        *head = (*head)->next;
        delete(temp);
    }
    *head = NULL;
}

void LinkedList::insert_pos(Node** head , int data , int pos){
    if(pos == 1){
        insert_at_head(data);
        return;
    }

    Node* new_node = create_node(data);

    Node* temp = *head;
    for(int i = 1;(i < (pos-1))&& temp; i++){
        temp = temp->next; 
    } 
    if(temp == NULL){
        delete(new_node);
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}



int LinkedList::search_key_move_to_head(Node** head , int key){
    Node* prev = NULL;
    Node* curr = *head;
    while(curr != NULL){ 
        if(curr->data == key){
            if(prev != NULL){
                prev->next = curr->next;
                curr->next = *head;
                *head = curr;
            }
            return key; // found
        }
        prev = curr;
        curr = curr->next;
    }
    return 0; // not found
}


void LinkedList::sum_elemnts(Node* head){
   static int x = 0;
     if(head == NULL){

        printf("%d  ", x);
     }
     else{
        x += head->data;
        sum_elemnts(head->next);  
     }   
}