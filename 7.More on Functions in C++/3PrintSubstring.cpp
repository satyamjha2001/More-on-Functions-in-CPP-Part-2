#include <iostream>
#include <string.h>
using namespace std;
int substring(string str, int start, int end = -1);
int main()
{
    char str[20];
    int start, end, i;
    cout << "Enter the string" << endl;
    cin.getline(str, 20);
    cout << "Enter the starting index for printing substring" << endl;
    cin >> start;
    substring(str, start);
    cout << "\nEnter the starting and ending index for printing substring" << endl;
    cin >> start >> end;
    substring(str, start, end);
    return 0;
}
int substring(string str, int start, int end)
{
    if (end == -1)
        end = strlen(str.c_str());
    for (int i = start; i < end; i++)
    {
        cout << str[i];
    }
}