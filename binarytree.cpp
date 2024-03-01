#include "binarytree.hpp"

Node::Node(){}

Node::Node(int d){
    this->data = d;
}

Node::Node(int d,Node* l,Node* r){
    this->data = d;
    this->left = l;
    this->right = r;
}

void Tree::Insert(int d){
    this->root = InsertNode(this->root,d);
}


Node* Tree::InsertNode(Node* n,int d){
    std::cout<<"Entering Insert Node "<<n<<std::endl;
    if(n==NULL){
        std::cout<<"Creating New Node with d : "<<d<<std::endl;
        return new Node(d);
    }

    if(n->data > d){
        std::cout<<"Inserting Node on the left Side with root d "<<n->data<<std::endl;
        n->left = InsertNode(n->left,d);
    }else{
        std::cout<<"Inserting node on the right side with root d "<<n->data<<std::endl;
        n->right = InsertNode(n->right,d);
    }
    return n;
}

std::string Tree::InOrder(){
    return InOrderTraversal(this->root);
}

std::string Tree::InOrderTraversal(Node* r){
    std::cout<<"Entering Inorder Traversal"<<r<<std::endl;
    if(r==NULL){
        return "";
    }
    std::cout<<"Passed base case Inorder Traversal"<<std::endl;

    std::string s="";
    std::cout<<"Passed base case Inorder Traversal"<<std::endl;
    s += InOrderTraversal(r->left);
    std::cout<<"left passed base case Inorder Traversal"<<std::endl;
    s += std::to_string(r->data);
    std::cout<<"data passed case Inorder Traversal"<<std::endl;
    s+= InOrderTraversal(r->right);
    std::cout<<"right pass case Inorder Traversal"<<std::endl;

    return s;
}

std::string Tree::PreOrder(){
    return PreOrderTraversal(this->root);
}

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


std::string Tree::PostOrder(){
    return PostOrderTraversal(this->root);
}

std::string Tree::PostOrderTraversal(Node* r){
    if(!r){
        return "";
    }

    std::string s="";
    s += PreOrderTraversal(r->left);
    s += PreOrderTraversal(r->right);
    s += std::to_string(r->data);

    return s;
}


