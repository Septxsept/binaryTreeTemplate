


#include <iostream>
using namespace std;

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
    Node<T>* insert(Node<T>* currentNode, const T& value) {
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

    // Private helper function for printing the tree using in-order traversal
    void printInOrder(Node<T>* currentNode) const {
        if (currentNode != nullptr) {
            printInOrder(currentNode->left);
            cout << currentNode->data << " ";
            printInOrder(currentNode->right);
        }
    }

public:
    // Constructor
    BinaryTree() : root(nullptr) {}

    // Public function to insert a value into the tree
    void insert(const T& value) {
        root = insert(root, value);
    }

    // Public function to print the tree using in-order traversal
    void printInOrder() const {
        cout << "In-order traversal: ";
        printInOrder(root);
        cout << std::endl;
    }
};

// Driver program
int main() { 
    
    cout << "C++ CIS245 ** Name: Komlaga Gone **          C++" << endl;
    cout << "C++ CIS245 ** Chapter 14 binary tree **          C++" << endl;
    cout << "C++ CIS245 ** #1 Your Own Linked List. **     C++" << endl;
    cout << "C++ CIS245 ** Date Submitted:  11/30/2023 **    C++ \n\n\n" << endl;


    // Creating a binary tree with integers
    BinaryTree<int> intTree;



   

    // Inserting values into the tree
    intTree.insert(5);
    intTree.insert(3);
    intTree.insert(7);
    intTree.insert(2);
    intTree.insert(4);
    intTree.insert(6);
    intTree.insert(8);

    // Printing the tree using in-order traversal
    intTree.printInOrder();

    // Creating a binary tree with characters
    BinaryTree<char> charTree;

    // Inserting values into the tree
    charTree.insert('d');
    charTree.insert('b');
    charTree.insert('f');
    charTree.insert('a');
    charTree.insert('c');
    charTree.insert('e');
    charTree.insert('g');

    // Printing the tree using in-order traversal
    charTree.printInOrder();

    return 0;
}
