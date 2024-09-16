#include <iostream>
#include <string>
using namespace std;
int main()
{
    int int1 = 35;
    int int2 = 20;
    int int3 = 15;
    int int4 = 25;
    int int5 = int1 + int2;
    int int6 = int1 - int2;
    int int7 = int1 * int2;
    int int8 = int1 / int2;
    int int9 = int1 % int2;
    cout << int3 << endl << int4 << endl << int5 << endl << int6 << endl << int7 << endl;
    if (int1 == int2)
    {
        cout << "operator == " << "true" << endl;
    }
    else
    {
        cout << "operator == " << "false" << endl;
    }
    if (int1 != int2)
    {
        cout << "operator != " << "true" << endl;
    }
    else
    {
        cout << "operator != " << "false" << endl;
    }
    if (int1 > int2)
    {
        cout << "operator > " << "true" << endl;
    }
    else
    {
        cout << "operator > " << "false" << endl;
    }
    if (int1 < int2)
    {
        cout << "operator < " << "true" << endl;
    }
    else
    {
        cout << "operator < " << "false" << endl;
    }
    if (int1 >= int2)
    {
        cout << "operator >= " << "true" << endl;
    }
    else
    {
        cout << "operator >= " << "false" << endl;
    }
    if (int1 <= int2)
    {
        cout << "operator <= " << "true" << endl;
    }
    else
    {
        cout << "operator <= " << "false" << endl;
    }
    if (!(int1 == int2))
    {
        cout << "operator ! == " << "true" << endl;
    }
    else
    {
        cout << "operator ! == " << "false" << endl;
    }
    if (int1 != int3 && int2 == int4)
    {
        cout << "operator != && == " << "true" << endl;
    }
    else
    {
        cout << "operator != && == " << "false" << endl;
    }
    if (int1 == int3 || int2 != int4)
    {
        cout << "operator == || != " << "true" << endl;
    }
    else
    {
        cout << "operator == || != " << "false" << endl;
    }
}