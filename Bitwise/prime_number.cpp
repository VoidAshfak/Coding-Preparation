#include<iostream>
using namespace std;

int main()
{
    int n = 13;
    bool isPrime = 1;

    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1)
        cout << "Prime" <<endl;
    else
        cout << "Not Prime" << endl;


    return 0;
}
