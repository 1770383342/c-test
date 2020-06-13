#include<iostream>
using namespace std;

int factorial(int n)            //阶乘运算
{
    int a = 1, i;
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}

int factorial2(int n)           //递归计算阶乘
{
    if (n==0)
    {
        return 1;
    }
    return n * factorial2(n - 1);
}

int main()
{
    int a;
    a = factorial(5) + factorial2(4);
    cout << "5! + 4! = " << a << endl;

    return 0;
}