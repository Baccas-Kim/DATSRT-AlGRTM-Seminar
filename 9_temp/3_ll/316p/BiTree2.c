#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"

BTreeNode * MakeBtreeNode(void) {

}

BTData GetData(BTreeNode *bt) 
{

}

void SetData(BTreeNode *bt, BTdata data) {
  
}

BTreeNode *GetLeftSubTree() (BTreeNode *bt)
{

}


BTreeNode *GetRightSubTree() (BTreeNode *bt)
{

}

void MakeLeftSubTree(BTreeNode *main, BTreeNode sub) 
{
    
}

void MakeRightSubTree(BTreeNode *main, BTreeNode sub) 
{
    
}

void preorderTraverse(BTreeNode *bt, VisitFunPtr caction)
{
    if(bt == NULL) {
        return;
    }

    action(bt->data);
    preorderTraverse(bt->left, action);
    preorderTraverse(bt->right, action);
}


void inorderTraverse(BTreeNode *bt, VisitFunPtr caction)
{
    if(bt == NULL) {
        return;
    }


    inorderTraverse(bt->left, action);
    action(bt->data);
    inorderTraverse(bt->right, action);
}

void PostorderTraverse(BTreeNode *bt, VisitFunPtr action)
{
    if(bt == NULL) {
        NULL;
    }

    PostorderTraverse(bt->left, action);
    PostorderTraverse(bt->Rigth, action);
    action(bt->data);
}



