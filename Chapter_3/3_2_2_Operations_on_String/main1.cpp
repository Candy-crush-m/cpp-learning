#include <iostream>
using namespace std;

int main() {


    //编写一段程序从标准输入中一次读入一整行
    string line;
    while (getline(cin,line)) {
        cout << line << endl;
    }

    system("pause");
    return 0;
}


//
// Created by zzm on 2026/7/11.
//