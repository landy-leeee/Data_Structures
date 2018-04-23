// SqStack.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "SqStack.h"
using namespace std;

int main()
{
    SqStack<int> stack;
    cout << stack.length() << endl; //空链表
    for (int i = 1; i <= 6; i++)
        stack.push(i * 3);
    cout << stack.length() << endl;
    stack.clear();
    cout << stack.length() << endl;
    for (int i = 1; i <= 11; i++)
        stack.push(i * 4);
    cout << stack.pop() << endl;
    cout << stack.length() << endl;
    return 0;
}

