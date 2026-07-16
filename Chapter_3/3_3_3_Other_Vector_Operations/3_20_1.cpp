#include<iostream>
#include <vector>
using namespace std;

int main() {

    //读入一组整数并把它们存入一个vector对象，将每对相邻整
    //数的和输出出来。改写你的程序，这次要求先输出第1个和最后1个元素
    //的和，接着输出第2个和倒数第2个元素的和，以此类推。


    int num;
    vector<int> ivec;
    while (cin >> num)
    {
        ivec.push_back(num);
    }
    if (ivec.empty())
    {
        cout << "没有输入任何数字！" << endl;
    }
    for (int i = 0; i < ivec.size() - 1; i++)
    {
        cout << ivec[i] + ivec[i + 1] << endl;
    }



    system("pause");
    return 0;
}


//
// Created by zzm on 2026/7/16.
//