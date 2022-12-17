#include <iostream>

using namespace std;

int main()
{
    int num = 1; 
    bool found = false; 
    while (!found)
    {
        bool divisible = true;
        for (int i = 1; i <= 20; i++)
        {
            if (num % i != 0)
            {
                divisible = false;
                break;
            }
        }
        if (divisible)
        {
            found = true;
            cout << num << endl;
        }
        else
        {
            num++;
        }
    }

    return 0;
}