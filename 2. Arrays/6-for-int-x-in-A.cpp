#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    for (int x : A) //for(int x in A)
        cout << x << endl;
    return 0;
}