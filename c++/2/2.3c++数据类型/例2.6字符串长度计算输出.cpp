#include<iostream>
using namespace std;

int main()
{
    char *pStr1 = "Enter a string:";            //使用字符指针
    char *pStr2 = "The length string is:";      
    char str[100];                              //使用字符数组

    cout << pStr1;
    cin >> str;

    int length = 0;
    while (str[length] !=0)
    {
        length++;
    }
    
    cout << pStr2 << length << '\n';

}