#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if (a>100)
    {
        for(int i=1; i<=a; i++)
        {
            if (a%i==0)
            {
                cout<<i<<endl;
            }
        }

    }
    else
    {
        cout<<"Error";
    }
    return 0;
}
