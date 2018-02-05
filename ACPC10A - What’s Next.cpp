#include <iostream>
//ACPC10A - What’s Next
using namespace std;
int main()
{
    int a,b,c;
    do
    {
        cin>>a>>b>>c;
        if(b-a == c-b)
        {
            cout<<"AP "<< c+(c-b)<<"\n";
        }
        else
        {
            cout << "GP " << c*(c/b)<<"\n";
        }
    }
    while (a != 0 && b != 0 && c != 0);
    return 0;
}
