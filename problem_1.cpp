#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i=1;i<=5;i++)
    {
        sum+=i;
    }
    
    int pow = 1;
    int ans = 0;
    while(sum>0){
        int parity = sum%2;
        ans += parity*pow;
        pow *=10;
        sum /= 2;
    }
    cout<<"the final anwer is : "<<(ans)<<endl;
    return 0;
}