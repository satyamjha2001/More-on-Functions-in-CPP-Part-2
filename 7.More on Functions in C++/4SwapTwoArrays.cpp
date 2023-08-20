#include <iostream>
using namespace std;
void swapArray(int *, int *, int, int);
int main()
{
    int m, n, a[30], b[30];
    cout << "Enter size of 1st array" << endl;
    cin >> m;
    cout << "Enter size of 2nd array" << endl;
    cin >> n;
    cout << "Enter elements of 1st array" << endl;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    cout << "Enter elements of 2nd array" << endl;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    swapArray(a, b, m, n);
    cout << "Array 1 after Swap" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl
         << "Array 2 after Swap" << endl;
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
    return 0;
}
void swapArray(int a[], int b[], int m, int n)
{
    int min = m < n ? m : n;
    int temp;
    for (int i = 0; i < min; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    if (m > n)
    {
        for (int i = n; i < m; i++)
        {
            b[i] = a[i];
        }
    }
    if (m < n)
    {
        for (int i = m; i < n; i++)
        {
            a[i] = b[i];
        }
    }
}