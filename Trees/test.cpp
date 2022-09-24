/*
 * @author: Zhexuan Gu
 * @Date: 2022-09-23 23:42:05
 * @LastEditTime: 2022-09-24 16:37:32
 * @FilePath: /CPPprojects/PolyU_DSA_datastructure_database/Trees/test.cpp
 * @Description: Please implement
 */
#include <iostream>
#include "Tree.h"
#include "Tree.cpp"

using namespace std;
using namespace gzx_simple_datastructure; 

void changeTree(TreeNode<char>* &oldroot, TreeNode<char>* newroot)
{
    oldroot = newroot;
}

void test_tree_traverse()
{
    // ‘0’代表空指针
    vector<char> vec{'+', '+', '*', 'a', '*', '+', 'g', '0', '0', 'b', 'c', '*', 'f', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', 'd', 'e'};
    Tree<char>* tree = new Tree<char>(vec);
    TreeNode<char>* root = tree->getRoot();         // 这里存在隐患，即外部修改root 会导致类内部的树也被损坏，有待改进
    //  一个无意的操作就会置空右子树，类里面的一并被改变了
    //root->rightchild = nullptr;         
    //root->_data = xxx   同样是危险的操作
    //
    cout << "Inorder Traverse: ";
    tree->inOrderTraverse(root);
    cout << endl;
    // 控制台会打印输出，未添加括号，将就着看吧......
    cout << "Prerder Traverse: ";
    tree->preOrderTraverse(root);
    cout << endl;

    cout << "Postrder Traverse: ";
    tree->postOrderTraverse(root);
    cout << endl;
}

int main(){
    test_tree_traverse();
    return 0;
}
