#include <bits/stdc++.h>
using namespace std;
class base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void getdata();
    void showdata();
};
class child : public base
{
    int k;

public:
    void getk();
    void output();
};
void base ::getdata()
{
    cin >> x >> y >> z;
}
void base ::showdata()
{
    cout << x << y << z;
}

void child ::getk()
{
    int k;
    cin >> k;
}
void child ::output()
{
    int s;
    s = y + z + k ;
    cout << s;
}
int main()
{
    child c1;
    c1.getdata();
    c1.showdata();
    c1.getk();
    c1.output();
}