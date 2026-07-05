#include <iostream>
using namespace std;

int main() {

    //编写代码分别更改指针的值以及指针所指对象的值
    int a = 0;
    int b = 8;
    int *p = &a;
    //更改指针的值
    cout << "更改指针的值前：*p = " << *p << endl;
    p = &b;
    cout << "更改指针的值后：*p = " << *p << endl;

    cout << "更改指针所指对象的值前：*p = " << *p << endl;
    *p = 40;
    cout << "更改指针所指对象的值后：*p = " << *p << endl;


    system("pause");
    return 0;
}





//
// Created by zzm on 2026/7/5.
//