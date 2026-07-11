#include<iostream>
using namespace std;

int main() {

    //编写一段程序，使用范围for语句将字符串内的所有字符用X代替
    string s = "hello world";
    for (char &c : s) {
        c = 'X';
    }
    cout << s << endl;

    system("pause");
    return 0;
}




//
// Created by zzm on 2026/7/11.
//