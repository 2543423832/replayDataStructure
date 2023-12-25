#ifndef __BINARY_SEARCH_TREE_H_
#define __BINARY_SEARCH_TREE_H_

#define ELEMENTTYPE int

typedef struct BSTreeNode
{
    ELEMENTTYPE data;
    struct BSTreeNode *left;        /* 左子树 */
    struct BSTreeNode *right;       /* 右子树 */
    #if 1
    struct BSTreeNode *parent;      /* 父结点 */
    #endif
} BSTreeNode;

typedef struct BinarySearchTree
{   
    /* 根结点 */
    BSTreeNode * root;
    /* 树的结点个数 */
    int size;
} BinarySearchTree;

/* 二叉搜索树的初始化 */
int binarySearchTreeInit(BinarySearchTree **pBstree);

/* 二叉搜索树的插入 */
int binarySearchTreeInsert(BinarySearchTree *pBstree, ELEMENTTYPE val);

/*二叉搜索树的前序遍历*/
int binarySearchPreOrderTravel(BinarySearchTree *pBstree);

/*二叉搜索树的中序遍历*/
int binarySearchPreInOrderTravel(BinarySearchTree *pBstree);

/*二叉搜索树的后序遍历*/
int binarySearchPrePostOrderTravel(BinarySearchTree *pBstree);

/*二叉搜索树的层序遍历*/
int binarySearchPreLeveOrderTravel(BinarySearchTree *pBstree);

#endif  //__BINARY_SEARCH_TREE_H_