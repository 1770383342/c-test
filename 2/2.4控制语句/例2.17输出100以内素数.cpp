#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n = 2, i, tag;
    cout << n << '\n';
    for (int n = 3; n <= 100; n += 2)
    {
        tag = 0;
        for (i = 2; tag == 0 && i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                tag = 1;
            }       
        }
        if (tag == 0)
        {
           cout << n << '\n';
        }   
        
    }
    
    

}