#include <iostream>
#include <string>
using namespace std;

class node
{
    publik : string info;
    node *leftchild;
    node *rightchild;

    node(string i, node *l, node *r)
    {
        info = i;
        leftchild = l;
        right = r;
    }
};

class binarytree
{
public:
    node *root;
    binarytree()
    {
        root = null; // initializingroot to nul
    }

    void insert(string element)
    {
        {
            Node *newNode = new Node(element, NULL, NULL);

            newNode->info = element;
            newNode->leftchild = NULL;
            newNode->rightchild = NULL;

            Node *parent = NULL;
            Node *currentNode = NULL;
        }
    }