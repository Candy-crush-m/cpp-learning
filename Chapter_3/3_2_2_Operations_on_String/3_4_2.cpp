#include<iostream>
using namespace std;


int main() {

    //改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。
    string s1,s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "两个字符串等长" << endl;
    }
    else if (s1.size() > s2.size()) {
        cout << "两个字符串不等长，长度较大的字符串为：" << s1 << endl;
    }
    else {
        cout << "两个字符串不相等，长度较大的字符串为：" << s2 << endl;
    }


    system("pause");
    return 0;
}






//
// Created by zzm on 2026/7/11.
//