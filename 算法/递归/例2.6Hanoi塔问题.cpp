#include<iostream>
using namespace std;

void move(int x,int y)
{
    cout << x << "-->" << y << endl;
}

void hanoi(int n, int a, int b, int c)
{
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);
        move(a, b);
        hanoi(n - 1, c, b, a);
    }
}

int main()
{
    int n, a, b, c;
    cout << "请输入盘子数:";
    cin >> n;
    cout << "移动盘子的步骤为:" << endl;
    hanoi(n, a, b, c);

    return 0;
}