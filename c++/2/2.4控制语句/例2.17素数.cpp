#include<iostream>
using namespace std;

int main()
{
    int i = 2, j;
    cout << i << '\n';

    for(int i = 2; i <= 100; i++)
    {
        j = 2;
        while (i%j != 0)            //当判断条件为真时跳出循环
        {
            j++;
            if(j==i)
            {
                cout << i << '\n';
            }
        }
    }
}