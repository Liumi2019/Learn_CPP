#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int n;

void general(int n, int l, int r, int& num, string res)
{
    if (r == n)
    {
        num++;
        // cout << res << endl;  // Êä³ö¡°£¨£©¡± É¾³ı res
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

int main()
{
    string str;
    int num;

    while (cin >> n )
    {
        num = 0;
        general(n, 0, 0, num, str);
        printf("%d\n", num);
    }
    return 0;
}