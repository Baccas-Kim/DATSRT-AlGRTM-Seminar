#ifdef __BINART_TREE2_H__
#define __BINART_TREE2_H__
typedef int BTData;

typedef struct _bTreeNode
{
    BTData data;
    struct _bTreeNode *left;
    struct _bTreeNode *Right;
}BTreeNode;

BTreeNode *MakeBTreeNode(void);
BTData GetData(BTreeNode *bt);
void SetData(BTreeNode *bt, BTData data);

BTreeNode *GetLeftSubTree(void);
BTreeNode *GetRightSubTree(void);

typedef void VisitFuncPtr(BTData data);

void PreorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void PostorderTraverse(BTreeNode *bt, VisitFuncPtr action);




#endif