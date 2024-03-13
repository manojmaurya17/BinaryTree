#ifndef __BINARYTREE

#define __BINARYTREE

#define RIGHT_DIRECTION "right"
#define LEFT_DIRECTION "left"
#include<iostream>

struct Node{
    int data;
    Node* left;
    Node* right;
    Node();
    Node(int d);
    Node(int d,Node* l,Node* r);
};



class Tree{
    Node* root;

    Node* InsertNodeBST(Node* n,int d);
    std::string InOrderTraversal(Node* r);
    std::string PreOrderTraversal(Node* r);
    std::string PostOrderTraversal(Node* r);
    std::string LevelOrderTraversal(Node* r);
    int HeightOfTheTree(Node* r);

    public:
    Tree();
    Node* Root();
    // Tree(Node* r);
    // ~Tree();
    void Insert(int d[]);
    void InsertBST(int d);
    int Height();
    // int DeleteNode(int d); 
    // bool SearchNode(int d);

    // traversal
    std::string InOrder();
    std::string PreOrder();
    std::string PostOrder();
    std::string LevelOrder();
};







#endif