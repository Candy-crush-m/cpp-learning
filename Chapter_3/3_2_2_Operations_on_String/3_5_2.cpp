#include<iostream>
using namespace std;

int main() {

    //编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串
    //然后修改上述程序，用空格把输入的多个字符串分隔开来。
    string s;
    //可以用getline也可以在<<后面加上" "

    while (getline(cin,s)) {
        cout << s ;
    }

    system("pause");
    return 0;
}
//
// Created by zzm on 2026/7/11.
//