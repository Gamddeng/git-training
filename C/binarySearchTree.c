#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *leftChild;
    struct Node *rightChild;
} Node;

Node *insertNode(Node *root, int data)
{
    if (root == NULL) {
        root = (Node *)malloc(sizeof(Node));
        root->leftChild = root->rightChild = NULL;
        root->data = data;
        return root;
    }
    else {
        if (root->data > data) {
            root->leftChild = insertNode(root->leftChild, data);
        }
        else {
            root->rightChild = insertNode(root->rightChild, data);
        }
    }
    return root;
}

Node *searchNode(Node *root, int data) {
    if (root == NULL) return NULL;
    if (root->data == data) return root;
    else if (root->data > data) return searchNode(root->leftChild, data);
    else return searchNode(root->rightChild, data);
}

void preorder(Node *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->leftChild);
    preorder(root->rightChild);
}

void inorder(Node *root) {
    if (root == NULL) return;
    inorder(root->leftChild);
    printf("%d ", root->data);
    inorder(root->rightChild);
}

void postorder(Node *root) {
    if (root == NULL) return;
    postorder(root->leftChild);
    postorder(root->rightChild);
    printf("%d ", root->data);
}

Node* findMinNode(Node* root) {
    Node* node = root;
    while (node->leftChild != NULL) {
        node = node->leftChild;
    }
    return node;
}

Node* deleteNode(Node* root, int data) {
    Node* node = NULL;
    if (root == NULL) return NULL;
    if (root->data > data) root->leftChild = deleteNode(root->leftChild, data);
    else if (root->data <data) root->rightChild = deleteNode(root->rightChild, data);
    else {
        if (root->leftChild != NULL && root->leftChild != NULL) {
            node = findMinNode(root->rightChild);
            root->data = node->data;
            root->rightChild = deleteNode(root->rightChild, node->data);
        }
        else {
            node = (root->leftChild != NULL) ? root->leftChild : root->rightChild;
            free(node);
            return node;
        }
    }
    return root;
}

int main(void)
{
    Node* root = NULL;
    root = insertNode(root, 30);
    root = insertNode(root, 17);
    root = insertNode(root, 48);
    root = insertNode(root, 5);
    root = insertNode(root, 23);
    root = insertNode(root, 37);
    root = insertNode(root, 50);
    root = deleteNode(root, 30);
    preorder(root);
    system("pause");
    return 0;
}