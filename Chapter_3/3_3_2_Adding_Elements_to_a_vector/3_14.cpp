#include<iostream>
#include <vector>
using namespace std;

int main() {

    //编写一段程序，用cin读入一组整数并把它们存入一个vector对象
    int num;
    vector<int>ivec;//创建一个空vector
    while (cin >> num)
        ivec.push_back(num);
    for (int i = 0; i < ivec.size(); i++)
    {
        cout << ivec[i] << " ";
    }


    system("pause");
    return 0;
}





//
// Created by zzm on 2026/7/16.
//