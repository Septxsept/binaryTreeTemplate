#pragma once

// Node template for the binary tree
template <typename T>
struct Node {
    T data;
    Node* left;
    Node* right;

    Node(const T& value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary tree template
template <typename T>
class BinaryTree {
private:
    Node<T>* root;

    // Private helper function for inserting a value into the tree
    Node<T>* insert(Node<T>* currentNode, const T& value);

    // Private helper function for printing the tree using in-order traversal
    void printInOrder(Node<T>* currentNode) const;

public:
    // Constructor
    BinaryTree();

    // Public function to insert a value into the tree
    void insert(const T& value);

    // Public function to print the tree using in-order traversal
    void printInOrder() const;
};
