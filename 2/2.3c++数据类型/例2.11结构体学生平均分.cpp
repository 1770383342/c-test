#include<iostream>
#include<string>
using namespace std;

struct student          //定义结构体
{
    char name[200];
    int score[4];
    int average;
};


int main()
{
    student stu;
    int i, sum = 0;
    cout << "请输入学生姓名：";
    cin >> stu.name;
    cout << "请输入学生的成绩：";
    for (int i = 0; i < 4; i++)
    {
        cin >> stu.score[i];
    }
    for (int i = 0; i < 4; i++)
    {
        sum += stu.score[i];
    }
    stu.average = sum / 4;
    cout << "学生" << stu.name << "的平均分为：" << stu.average << '\n';
    
}