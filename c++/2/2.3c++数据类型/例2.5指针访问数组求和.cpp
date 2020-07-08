#include<iostream>
using namespace std;

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int *pa = a;
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += *pa;
        pa++;
    }
    cout << "数组的和为：" << result << '\n';
    

}