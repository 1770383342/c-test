#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    cout << *pa << ',' << *pb << '\n';
    pa = &b;
    pb = &a;
    cout << *pa << ',' << *pb << '\n';
    *pa = 100;
    *pb = 200;
    cout << a << ',' << b << '\n';

}
