#include <iostream>
using namespace std;



int main(){

    int i;
    int &ri = i;
    i = 5;
    ri = 10;
    cout << i << " " << ri << endl;


    system("pause");
    return 0;
}
//
// Created by zzm on 2026/7/5.
//