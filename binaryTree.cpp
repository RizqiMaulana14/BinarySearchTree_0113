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
            while ((currentNode != nullptr) && (currentNode->info != element)){
                parent = currentNode;
                if (element < currentNode->info)
                    currentNode = currentNode->leftchild;
                else
                    currentNode = currentNode->rightchild;
            }
        }

        void insert(){
            int x;
            cout << "Masukkan Nilai: ";
            cin >> x;

            //step 1: Allocate memory for the new node
            Node *newNode = new Node();

            //step 2: Assign value to the data field of new node
            newNode->info = x;

            //step 3: Make the left and right child of the new node point to null
            newNode->leftchild = nullptr;
            newNode->rightchild = nullptr;

            //step 4: Locate the node which will be the new parent of the node to be inserted
            Node *parent = nullptr;
            Node *currentNode = nullptr;
            search (x, parent, currentNode);

            //Step 5: if parent is NULL (Tree is empty)
            if (parent == nullptr){
                //5a: Mark the new node as root
                ROOT = newNode;

                //5b: Exit
                return;
            }

            //step 6: If the value in the data field od new node is less tahan that of parent
            if(x < parent->info){
                //6a: Make the left child of parent to the new node
                parent->leftchild = newNode;
            }
        }
};