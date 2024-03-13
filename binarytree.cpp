#include "binarytree.hpp"
#include<queue>

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

void Tree::Insert(int d[]){
    
}


/* Inser the node into the tree in Binary Search Tree Fashion*/
void Tree::InsertBST(int d){
    this->root = InsertNodeBST(this->root,d);
}

/* Helper function for inserting node into the tree in Binary Search Tree Fashion*/
Node* Tree::InsertNodeBST(Node* n,int d){
    if(n==NULL){
        return new Node(d);
    }

    if(n->data > d){
        n->left = InsertNodeBST(n->left,d);
    }else{
        n->right = InsertNodeBST(n->right,d);
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

/*Level Order Traversal*/
std::string Tree::LevelOrder(){
    return LevelOrderTraversal(this->root);
}

/*Helper function for level order traversal*/
/*It will use queue to store the nodes of one level*/
std::string Tree::LevelOrderTraversal(Node* r){
    if(!r){
        return "";
    }
    std::queue<Node*> q;
    q.push(r);
    q.push(NULL);
    std::string ans = "";
    while(q.front()!=NULL){
        while(q.front()!=NULL){
            Node* t = q.front();
            q.pop();
            ans += std::to_string(t->data);
            if(t->left!=NULL){
                q.push(t->left);
            }
            if(t->right!=NULL){
                q.push(t->right);
            }
        }
        q.pop();
        q.push(NULL);
    }
    return ans;
}

/*Height of the Tree*/
int Tree::Height(){
    return HeightOfTheTree(this->root);
}

/*Helper function for finding height of the tree*/
/*Intution : Right and left node will give it's height we will just compare which is 
larger and will return (largerOfBoth+1)*/
int Tree::HeightOfTheTree(Node* r){
    if(!r){
        return 0;
    }

    int height=0;
    if(r->left!=NULL){
        height = std::max(height,HeightOfTheTree(r->left));
    }
    if(r->right!=NULL){
        height = std::max(height,HeightOfTheTree(r->right));
    }
    return height+1;
}

