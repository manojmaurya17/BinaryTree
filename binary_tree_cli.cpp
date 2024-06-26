#include "binary_tree_cli.hpp"
#include <iostream>

/*This function will show the option on the CLI to interact*/
void BinaryTreeCli::run(){
    while(true){
        std::cout<<"\
        Binary Tree CLI:\n \
        1. Insert\n \
        2. Delete\n \
        3. Search\n \
        4. Travesal\n \
        5. Height\n \
        6. Exit\n \
        Select one option: ";

        int option,d;
        std::string temp;
        std::cin>>option;
        switch(option){
            case OPTION_INSERT:
                system("clear");
                std::cout<<"Enter integer value to insert into the binary tree: ";
                std::cin>>d;
                t.InsertBST(d);
                std::cout<<d<<" has been inserted into the binary tree.\nPress c to continue.";
                std::cin>>temp;
                break;
            case OPTION_DELETE:
                system("clear");
                std::cout<<"Enter integer value to delete from the binary tree: ";
                std::cin>>d;
                std::cout<<d<<" has been deleted from the binary tree.\nPress c to continue";
                std::cin>>temp;
                break;
            case OPTION_SEARCH:
                system("clear");
                std::cout<<"Enter integer value to search it in the binary tree: ";
                std::cin>>d;
                std::cout<<d<<" has been found in the binary tree.\nPress c to continue";
                std::cin>>temp;
                break;
            case OPTION_TRAVERSE:
                system("clear");
                traverse();
                break;
            case OPTION_HEIGHT:
                system("clear");
                std::cout<<"The Height of the Tree is : "<<t.Height()<<"\nPress c to continue.";
                std::cin>>temp;
                break;
            case OPTION_EXIT:
                exit(0);
                break;
            default:
                std::cout<<"Please Enter a Valid Option.";
                
        }
        system("clear");
    }
}

/*This function will help in the traversal options on the CLI*/
void BinaryTreeCli::traverse(){
    while(true){
        std::cout<<"\
        1. Inorder\n \
        2. PreOrder\n \
        3. PostOrder\n \
        4. LevelOrder\n \
        5. Main Menu\n \
        Select one option: ";
        int option;
        std::string temp;
        std::cin>>option;
        switch(option){
            case OPTION_TRAVERSAL_INORDER:
                std::cout<<"InOrder : "<<t.InOrderIterative()<<"\nPress c to Continue";
                std::cin>>temp;
                break;
            case OPTION_TRAVERSAL_PREORDER:
                std::cout<<"PreOrder : "<<t.PreOrderIterative()<<"\nPress c to Continue";
                std::cin>>temp;
                break;
            case OPTION_TRAVERSAL_POSTORDER:
                std::cout<<"PostOrder"<<t.PostOrder()<<"\nPress c to Continue";
                std::cin>>temp;
                break;
            case OPTION_TRAVERSAL_LEVELORDER:
                std::cout<<"Level Order Traversal "<<t.LevelOrder()<<"\nPress c to continue.";
                std::cin>>temp;
                break;
            case OPTION_TRAVERSAL_MAIN_MENU:
                return;
            default:
                std::cout<<"Enter a valid choice\n";
        }
        system("clear");
    }
}