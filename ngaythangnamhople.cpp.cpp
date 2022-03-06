#include <iostream>
using namespace std;
int main()
{
    int d, m, y, dmax;
    cin >> d;
    cin >> m;
    cin >> y;
    if (y <= 0)
    {
        cout << "Nam khong hop le.";
        return 0;
    }
    if (m < 1 || m>12)
    {
        cout << "Thang khong hop le.";
        return 0;
    }
    cout << d << "/" << m << "/" << y << " la ngay ";
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dmax = 31;
        break;

    case 2:
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            dmax = 29;
        else dmax = 28;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        dmax = 30;
        break;
    }
    if (d >= 1 && d <= dmax)
        cout << "hop le.";
    else
        cout << "khong hop le.";
    cout << "\n";
    cout << "thang " << m << " co " << dmax << " ngay"<<"\n";
  return 0; 
}