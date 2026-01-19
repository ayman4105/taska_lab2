#include<stdio.h>
#include<stdlib.h>
#include"stack.h"


typedef struct node {
    int data;
    struct node* left;
    struct node* right;
}node;








node* create_node(int value){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = value;
    new_node->left = new_node->right = NULL;
    return new_node;
}


node* create_BST(int arr[], int n){
    if(n == 0) return NULL;

    node** stack = (node**)malloc(n * sizeof(node*)); // stack of node pointers
    int top = -1;

    node* root = create_node(arr[0]);
    top++;
    stack[top] = root;

    for(int i = 1; i < n; i++){
        node* temp = NULL;

        while(top != -1 && arr[i] > stack[top]->data){
            temp = stack[top];
            top--;
        }

        if(temp != NULL){
            temp->right = create_node(arr[i]);
            top++;
            stack[top] = temp->right;
        }
        else{
            stack[top]->left = create_node(arr[i]);
            top++;
            stack[top] = stack[top-1]->left;
        }
    }

    free(stack); // free temporary stack
    return root;
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
}


node* search_node(node* root , int value){
    if(root == NULL) return NULL; // tree empty 

    if(value == root->data){
        return root;
    } 

    if(value > root->data){
        return search_node(root->right , value);
    }
    else if( value < root->data){
        return search_node(root->left , value);
    }
    else{
        return NULL;
    }
}

void inorder(node* root){
    if(root == NULL) return; // tree empty

    inorder(root->left);
    printf("%d " , root->data);
    inorder(root->right);
}


void postorder(node* root){
    if(root == NULL) return; // tree empty

    postorder(root->left);
    postorder(root->right);
    printf("%d " , root->data);
}


void pretorder(node* root){
    if(root == NULL) return; // tree empty

    printf("%d " , root->data);
    pretorder(root->left);
    pretorder(root->right);
}


node* find_min(node* root){
    node* curr = root;
    if(curr == NULL) return NULL;

    while(curr && curr->left){
        curr = curr->left;
    }
    return curr;
}

node* find_max(node* root){
    node* curr = root;
    if(curr == NULL) return NULL;

    while(curr && curr->right){
        curr = curr->right;
    }
    return curr;
}




node* delete_node(node* root, int value){
    // case 1: tree is empty
    if (root == NULL)
        return NULL;

    // go to left subtree if value is smaller
    if (value < root->data) {
        root->left = delete_node(root->left, value);
    }
    // go to right subtree if value is larger
    else if (value > root->data) {
        root->right = delete_node(root->right, value);
    }
    // value found (node to delete)
    else {
        // case 2: node has no left child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        // case 3: node has no right child
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        // case 4: node has two children
        else {
            // find inorder successor (minimum in right subtree)
            struct node* successor = find_min(root->right);

            // copy successor value to current node
            root->data = successor->data;

            // delete successor from right subtree
            root->right = delete_node(root->right, successor->data);
        }
    }

    return root;
}






void free_tree(struct node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main() {
    node* root = NULL; 

    root = insert_node(root, 50);
    root = insert_node(root, 30);
    root = insert_node(root, 70);
    root = insert_node(root, 20);
    root = insert_node(root, 40);
    root = insert_node(root, 60);
    root = insert_node(root, 80);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    pretorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    int search_val = 40;
    node* found = search_node(root, search_val);
    if(found)
        printf("Value %d found \n", search_val);
    else
        printf("Value %d not found \n", search_val);

    int delete_val = 30;
    root = delete_node(root, delete_val);
    printf("Inorder after deleting %d: ", delete_val);
    inorder(root);
    printf("\n");

    delete_val = 50;
    root = delete_node(root, delete_val);
    printf("Inorder after deleting %d (root): ", delete_val);
    inorder(root);
    printf("\n");

    free_tree(root);

    return 0;
}
