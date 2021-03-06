// SingleLinkedList.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "SingleLinkedList.h"
#include "SingleLinkedList.cpp"
using namespace std;

bool equal(int a, int b);

int main()
{
    SingleLinkList<int> L;

    cout << (L.EmptyList() ? "空链表" : "非空链表") << endl;  //Empth测试 -->空链表

    int arr[] = { 2, 4, 6, 8, 10 };
    L.CreateList_S(5, arr); //顺序创建链表

    L.Display();    //输出测试 --> 2 4 6 8 10
    cout << (L.EmptyList() ? "空链表" : "非空链表") << endl;  //Empth测试 -->非空链表

    L.ClearList();  //清空测试
    cout << (L.EmptyList() ? "空链表" : "非空链表") << endl;  //Empth测试 -->空链表

    L.CreateList_IS(5, arr);    //逆序创建链表
    L.Display();    //结果同顺序

    for (int i = 1; i <= L.ListLength(); i++)   //长度查询
        cout << "第 " << i << " 位元素为 " << L.GetElem(i) << endl;  //获取元素

    cout << L.LocateElem(6, equal) << endl; //定位测试 --> 3

    cout << L.PriorElem(4) << endl; //有效前驱 --> 2
    cout << L.PriorElem(2) << endl; //无效前驱 --> 0

    cout << L.NextElem(4) << endl;  //有效后继
    cout << L.NextElem(10) << endl; //无效后继

    L.Append(12);
    L.Display();
    L.Remove();
    L.Display();
    L.Insert(3, 5);
    L.Display();
    L.Delete(4);
    L.Display();
    return 0;
}

bool equal(int a, int b) { return a == b; }