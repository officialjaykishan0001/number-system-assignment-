#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter your natural number : " ;
    cin>>n;

    int binary = 0, pow = 1;
    while(n>0)
    {
        int parity = n%2;
        binary += parity*pow;
        pow *=10;
        n /=2;
    }

    cout<<"the binary representation of the entered number is : "<<(binary)<<endl;
    int count = 0;
    while(binary>0)
    {
        if(binary%10==0)
        {
            count ++;
        }
        binary /= 10;
    }

    cout<<"there are "<<count<<" zeros presentation in the number (binary number)"<<endl;
    return 0;

}