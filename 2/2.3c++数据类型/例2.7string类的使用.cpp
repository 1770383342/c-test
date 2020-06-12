#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    cout << "输入字符串1：";
    cin >> str1;
    cout << "字符串长度为：" << str1.size() << endl;    //求字符串长度
    for (int i = 0; i < str1.size(); ++i)               //遍历字符串
    {
        cout << str1[i] << ' ';
    }
    cout << endl;
    string str2 = "Visual", str3 = "c++";
    str2.append(1, ' ');
    str2 = str2 + str3;                                 //连接两个字符串
    cout << str2 << endl;
    string str4 = "I am a student", str5 = "studeng", str6 = "teacher";

    if (str4.find(str5)!=-1)                            //判断字符串是否包含子串
    {
        cout << "find" << str5 << endl;
    }
    if (str4.find(str6)==-1)
    {                                                                                                    
        cout << "not find " << str6 << endl;
    }

    str5.swap(str6);
    cout << "str5: " << str5 << endl;
    cout << "str6: " << str6 << endl;
    return 0;
}