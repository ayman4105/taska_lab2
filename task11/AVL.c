#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data;
    int hight;
    struct node* left;
    struct node* right;
}node;

node* create_node(int value){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = value;
    new_node->hight = 1;
    new_node->left = new_node->right = NULL;
    return new_node;
}

int hight(node* H){
    if(H == NULL) return 0;

    return H->hight;
}

int max(int a , int b){
    if(a > b) return a;
    else return b;
}

int get_blance(node* b){
    if(b == NULL) return 0;
    return hight(b->left) - hight(b->right);
}




node* rotate_right(node* root){
    //n_node mean new node
    node* n_node = root->right;
    node* t = n_node->left;

    n_node->right = root;
    root->left = t;

    root->hight = 1 + max(hight(root->left) , hight(root->right));
    n_node->hight = 1 + max(hight(n_node->left) , hight(n_node->right));

    return n_node;
}


node* rotate_left(node* root){
    // n_node mean new node
    node* n_node = root->right;
    node* t = n_node->left;

    n_node->left = root;
    root->right = t;

    root->hight = 1 + max(hight(root->left) , hight(root->right));
    n_node->hight = 1 + max(hight(n_node->left) , hight(n_node->right));

    return n_node;
}



node* insert_node(node* root , int value){
    if(root == NULL){
        return create_node(value);
    }
    if(root->data > value){
        root->left =  insert_node(root->left , value);
    }
    else if(root->data < value){
    root->right =  insert_node(root->right , value);
    }
    return root;

    root->hight = 1 + max(hight(root->left) , hight(root->right));
    int balance = get_blance(root);

    if(balance > 1 && value < root->left->data)
        return rotate_right(root);

    if(balance < -1 && value > root->right->data)
        return rotate_left(root);

    if(balance > 1 && value > root->left->data){
        root->left = rotate_left(root->left);
        return rotate_right(root);
    }

    if(balance < -1 && value < root->right->data){
        root->right = rotate_right(root->right);
        return rotate_left(root);
    }

    return root;
}
