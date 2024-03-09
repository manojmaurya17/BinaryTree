#include "binarytree.hpp"


/* Node Default Constructor*/
Node::Node(){
    this->left = NULL;
    this->right = NULL;
}

/* Initialising data in the Node Constructor*/
Node::Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}

/* We'll use this constructor when we know left and right child with data*/
Node::Node(int d,Node* l,Node* r){
    this->data = d;
    this->left = l;
    this->right = r;
}

/*Initalising root to  NULL with the constructor*/
Tree::Tree(){
    this->root = NULL;
}

/* Getter - will give root node of the tree*/
Node* Tree::Root(){
    return this->root;
}


/* Inser the node into the tree in Binary Search Tree Fashion*/
void Tree::Insert(int d){
    this->root = InsertNode(this->root,d);
}

/* Helper function for inserting node into the tree in Binary Search Tree Fashion*/
Node* Tree::InsertNode(Node* n,int d){
    if(n==NULL){
        return new Node(d);
    }

    if(n->data > d){
        n->left = InsertNode(n->left,d);
    }else{
        n->right = InsertNode(n->right,d);
    }
    return n;
}

/*Traversal - Inorder*/
std::string Tree::InOrder(){
    return InOrderTraversal(this->root);
}

/*Helper function for inorder traversal*/
std::string Tree::InOrderTraversal(Node* r){
    if(r==NULL){
        return "";
    }
    std::string s="";
    s += InOrderTraversal(r->left);
    s += std::to_string(r->data);
    s+= InOrderTraversal(r->right);
    return s;
}

/*Traversal - Preorder*/
std::string Tree::PreOrder(){
    return PreOrderTraversal(this->root);
}

/*Helper function for Preorder Traversal*/
std::string Tree::PreOrderTraversal(Node* r){
    if(!r){
        return "";
    }

    std::string s="";
    s += std::to_string(r->data);
    s += PreOrderTraversal(r->left);
    s += PreOrderTraversal(r->right);

    return s;
}

/*Traversal - PostOrder*/
std::string Tree::PostOrder(){
    return PostOrderTraversal(this->root);
}


/*Helper function for post order traversal*/
std::string Tree::PostOrderTraversal(Node* r){
    if(!r){
        return "";
    }

    std::string s="";
    s += PostOrderTraversal(r->left);
    s += PostOrderTraversal(r->right);
    s += std::to_string(r->data);

    return s;
}


