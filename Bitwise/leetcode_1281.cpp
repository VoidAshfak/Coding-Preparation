#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;
    while(n != 0){

        int digit = n%10;
        sum = sum + digit;
        prod = prod * digit;

        n = n/10;
    }

    cout << prod-sum <<endl;
    return 0;
}

