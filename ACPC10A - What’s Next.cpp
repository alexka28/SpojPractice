#include <iostream>
//ACPC10A - What’s Next
using namespace std;
int main()
{
    int a,b,c;
    do
    {
        cin>>a>>b>>c;
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        int d = b-a;
        if(b+d == c)
        {
            cout<<"AP "<< c+d<<"\n";
        }
        else
        {
            d=b/a;
            cout << "GP " << c*d<<"\n";
        }
    }
    while (1);
    return 0;
}
