#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
    return 0;
}