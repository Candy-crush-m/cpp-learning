#include<iostream>
#include <vector>
using namespace std;

//改写上题的程序，不过这次读入的是字符串

int main() {
    string word;
    vector<string> words;//创建空vector
    while (cin >> word)
    {
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << " " ;
    }


    system("pause");
    return 0;
}






//
// Created by zzm on 2026/7/16.
//