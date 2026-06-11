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

        Node *newNode = new Node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentNode = NULL;

        search(element, parent, currentNode);

        if (parent == NULL)
        {
            ROOT = newNode;
            return;
        }
        if (element < parent->info)
        {
            parent->leftchild = newNode;
        }
        else if (element > parent->info)
        {
            parent->rightchild = newNode;
        }
    }

    void search(string element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while ((currentNode != NULL) &&
               (currentNode->info != element))
        {
            parent = currentNode;