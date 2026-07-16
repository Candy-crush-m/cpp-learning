#include<iostream>
#include <vector>
using namespace std;

int main() {

    //从cin读入一组词并把它们存入一个vector对象，然后设法把
    //所有词都改写为大写形式。输出改变后的结果，每个词占一行。

    string word;
    vector<string> words;
    while (cin >> word)
    {
        words.push_back(word);//读入每个词并把它存入vector对象
    }
    for (int i = 0; i < words.size(); i++)
    {
        for (auto &c : words[i])
        {
            c = toupper(c);//所有字母都改成大写形式
        }
    }

    //输出改变后的结果
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }



    system("pause");
    return 0;
}







//
// Created by zzm on 2026/7/16.
//