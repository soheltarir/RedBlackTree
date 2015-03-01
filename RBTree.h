/**
 * @file RBTree.h
 * @brief 
 *        Red-Black Tree is a self-balancing Binary Search Tree (BST) where every node follows following rules.
          RedBlackTree
            1) Every node has a color either red or black.

            2) Root of tree is always black.

            3) There are no two adjacent red nodes (A red node cannot have a red parent or red child).

            4) Every path from root to a NULL node has same number of black nodes
 *
 * @author Sohel Tarir
 * @version 1.0
 * @date 2014-09-18
 */
#ifndef _RBTREE_H_
#define _RBTREE_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct node{
    int data;   //for data part
    char color; //for color part
    node *left, *right, *parent;
};

class RBTree{
    public:
        RBTree();
        ~RBTree();
        void insert(int data);
        void inorder();
    private:
        void leftRotate(node **root, struct node *x);
        void rightRotate(node **root, struct node *y);
        void insertFixUp(node **root, struct node *z);
        void insert(node **root, int data);
        void inorder(node *root);
        node *root;
};

#endif
