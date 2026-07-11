#include<iostream>
using namespace std;

int main() {

    //编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串
    string s1,s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "两个字符串相等" << endl;
    }
    else if (s1 > s2) {
        cout << "两个字符串不相等，较大的字符串为：" << s1 << endl;
    }
    else {
        cout << "两个字符串不相等，较大的字符串为：" << s2 << endl;
    }


    system("pause");
    return 0;
}




//
// Created by zzm on 2026/7/11.
//