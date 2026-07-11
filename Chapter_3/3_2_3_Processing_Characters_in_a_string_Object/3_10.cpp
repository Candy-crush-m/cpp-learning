#include<iostream>
using namespace std;

int main(){
//编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
string s;
cin >> s;
for (int i = 0; i < s.size(); i++)
{
    if (ispunct(s[i]))
    {
        s.erase(i,1);
        //删除一个字符则后面的字符会上来，所以此时不用++！！
        i--;
    }
}
cout << s << endl;

system("pause");
return 0;
}
//
// Created by zzm on 2026/7/11.
//