/*
 * @author: Zhexuan Gu
 * @Date: 2022-09-21 17:36:52
 * @LastEditTime: 2022-09-21 21:43:07
 * @FilePath: /CPPprojects/Leetcode/DataStructure_PolyU/Queue_and_Stack/test.cpp
 * @Description: Please implement
 */


#include <iostream>
#include "myStack.h"
#include "myStack.cpp"

using namespace std;
using namespace gzx_simple_stl;

int main(){
    MyStack<int> obj(5);
    int a = 3, b = 4, c = 5;
    int t;
    obj.Push(a);
    obj.Push(c);
    obj.Pop(t);
    cout << t << endl;
    obj.Push(b);
    obj.Pop(t);
    cout << t << endl;
    const MyStack<int> temp = static_cast<const MyStack<int>>(obj);
    cout << "Is obj empty? " << boolalpha << obj.IsEmpty() << endl;
    MyStack<int> obj2(temp);
    cout << "Is obj2 empty ? " << boolalpha << obj2.IsEmpty() << endl;
    obj2.Pop(t);
    cout << t << endl;
    
    return 0;
}