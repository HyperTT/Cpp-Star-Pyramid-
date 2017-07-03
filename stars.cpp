#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int height;
    cout<<"Enter a height\n";
    cin>>height;
    if (height <= 0)
    {
        cout<<"Height must be at least one.\n";
        return 0;
    }
    else
    {
        for (int outer = 1; outer <= height; outer++)
        {
            for (int inner = 1; inner <= outer; inner++)
            {
                cout<<'*';
            }
        cout<<endl;
        }
    }

    return 0;
}
