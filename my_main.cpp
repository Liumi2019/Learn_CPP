#include<cstdio>
#include<iostream>
#include<string>
#include"myFunction.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    string str;
    int num;

    cout << "输入括号对数：" << endl;

    while (cin >> n )
    {
        if (n <= 0) {
            break;
        }

        num = 0;
        general(n, 0, 0, num, str);

        printf("%d\n", num);

        cout << "\n 输入括号对数：" << endl;

    }

    return 0;
}