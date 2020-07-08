#include<iostream>
using namespace std;

int main()
{
    int i;
    float score[3];
    cout << "请输入三个学生的成绩：";
    for (i = 0; i < 3; i++)
    {
        cin >> score[i];    //数据输入
    }
    cout << "反序输出学生成绩：";
    for (i = 2; i >= 0; i--)
    {
        cout << score[i] <<' ';
    }
    cout << '\n';

}