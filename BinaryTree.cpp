#include "BinaryTree.h"
#include <iostream>

template <typename T>
Node<T>* BinaryTree<T>::insert(Node<T>* currentNode, const T& value) {
    if (currentNode == nullptr) {
        return new Node<T>(value);
    }

    if (value < currentNode->data) {
        currentNode->left = insert(currentNode->left, value);
    }
    else {
        currentNode->right = insert(currentNode->right, value);
    }

    return currentNode;
}

template <typename T>
void BinaryTree<T>::printInOrder(Node<T>* currentNode) const {
    if (currentNode != nullptr) {
        printInOrder(currentNode->left);
        std::cout << currentNode->data << " ";
        printInOrder(currentNode->right);
    }
}

template <typename T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

template <typename T>
void BinaryTree<T>::insert(const T& value) {
    root = insert(root, value);
}

template <typename T>
void BinaryTree<T>::printInOrder() const {
    std::cout << "In-order traversal: ";
    printInOrder(root);
    std::cout << std::endl;
}
