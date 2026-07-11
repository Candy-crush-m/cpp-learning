#include<iostream>
using namespace std;

int main() {

    //分别用while循环和传统的for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？
    /*
    string s = "hello world";
    int len = 0;
    while (len < s.size()) {
        s[len] = 'X';
        len++;
    }
    cout << s << endl;
    */

    string s = "hello world";
    for (int i = 0; i < s.size(); i++) {
        s[i] = 'X';
    }
    cout << s << endl;





    system("pause");
    return 0;
}




//
// Created by zzm on 2026/7/11.
//