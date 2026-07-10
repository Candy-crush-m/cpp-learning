#include <iostream>
#include <typeinfo>
using namespace std;

int main() {


    //判断下列定义推断出的类型是什么，然后编写程序进行验
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i,&k2 = i;


    //说明由decltype指定类型和由auto指定类型有何区别。请举出一个例子，
    //decltype指定的类型与auto指定的类型一样；
    int a1 = 0;
    auto b1 = a1;
    decltype(a1) b2 = a1;
    cout << typeid(b1).name() << endl;
    cout << typeid(b2).name() << endl;

    //再举一个例子，decltype指定的类型与auto指定的类型不一样。
    int *p1 = &a1;
    auto *c1 = &a1;
    decltype(*p1)c2 = a1;
    //c1是int *类型，c2是int &类型


    system("pause");
    return 0;
}






//
// Created by zzm on 2026/7/10.
//