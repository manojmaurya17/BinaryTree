#ifndef __INTERFACE

#define __INTERFACE

#define OPTION_INSERT 1
#define OPTION_DELETE 2
#define OPTION_SEARCH 3
#define OPTION_TRAVERSE 4
#define OPTION_HEIGHT 5
#define OPTION_EXIT 6

#define OPTION_TRAVERSAL_INORDER 1
#define OPTION_TRAVERSAL_PREORDER 2
#define OPTION_TRAVERSAL_POSTORDER 3
#define OPTION_TRAVERSAL_LEVELORDER 4
#define OPTION_TRAVERSAL_MAIN_MENU 5

#define BinaryTreeLength    255

#include "binarytree.hpp"


class BinaryTreeCli{
    Tree t;
    public:
    void run();
    void traverse();
};



/*
CLI Menu
1.Insert
2.Delete
3.Search
4.Traverse

*/


#endif