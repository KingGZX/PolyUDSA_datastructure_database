/*
 * @author: Zhexuan Gu
 * @Date: 2022-09-23 23:41:59
 * @LastEditTime: 2022-09-24 20:28:11
 * @FilePath: /CPPprojects/PolyU_DSA_datastructure_database/Trees/BinarySearchTree.cpp
 * @Description: Please implement
 */
#ifndef _BINARYSEARCHTREE_CPP_J
#define _BINARYSEARCHTREE_CPP_J

#include "BinarySearchTree.h"

namespace gzx_simple_datastructure{
    template<typename T>
    BinarySearchTree<T>::BinarySearchTree(vector<T> data)
    {
        Tree<T>::_root = new TreeNode<T>(data[0]);
        for(size_t i = 1 ; i < data.size() ; i ++)
        {
            createTreeByVectorRecursive(Tree<T>::_root, data[i]);
        }
        cout << "create bst object by vector\n";
    }

    /**
     * @description: 函数名字起草率了，其实插入某个元素时也可以用这个function，但不打算改了
     * @event:  传入树的根节点，待插入数据
     * @return  insert one node to the tree, so the returned obj is not so important
     */    
    template<typename T>
    TreeNode<T>* BinarySearchTree<T>::createTreeByVectorRecursive(TreeNode<T>* root, T data)
    {
        if(!root)
            return new TreeNode<T>(data);
        else
        {
            if(data > root->_data)
                root->rightchild = createTreeByVectorRecursive(root->rightchild, data);
            else if(data < root->_data)
                root->leftchild = createTreeByVectorRecursive(root->leftchild, data);
            else
            {
                cout << "The element " << data << " has been in the tree, do not insert!" << endl;
                return nullptr;
            }
        }
        return root;
    }

    template<typename T>
    BinarySearchTree<T>::~BinarySearchTree()
    {
        cout << "delete binary search tree object\n";
    }
};

#endif