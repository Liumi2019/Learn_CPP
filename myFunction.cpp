#include"myFunction.h"
#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;
using std::cin;


void put(int z)
{
	int x = 0;
	std::cout << "����һ��ֵ��" << std::endl;
	std::cin >> x;

	std::cout << "����ֵΪ��" << x * -1 << std::endl;

}


void general(int n, int l, int r, int& num, string res, bool st)
{
    if (r == n)
    {
        num++;
        if (st) {

            cout << res << endl;  // ����������� ɾ�� res

        }

        return;
    }
    if (l == r)
    {
        l++;
        res = res + '(';
        general(n, l, r, num, res);
    }
    else
    {
        if (l != n)
        {
            l++;
            res = res + '(';
            general(n, l, r, num, res);

            res.pop_back();
            l--;
            r++;
            res = res + ')';
            general(n, l, r, num, res);
        }
        else
        {
            r++;
            res = res + ')';
            general(n, l, r, num, res);
        }
    }
    return;
}
