#include <iostream>
using namespace std;

class Node{
    public:
        int info;
        Node* leftchild;
        Node* rightchild;

        //contrustro for the node class
        Node(){
            leftchild = nullptr;    //initialize left child to null
            rightchild = nullptr;   //initialize right child to null
        }
};

class BinaryTree{
    public:
        Node *ROOT;

        BinaryTree(){
            ROOT = nullptr;         //initialize ROOT to null
        }

        void search(int element, Node *&parent, Node *&currentNode){
            //This function searches the currentNode of the specified node as well as the currentNode
            currentNode = ROOT;
            parent = nullptr;
           
        }
};