#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter your first binary digit : ";
    cin>>x;
    int y;
    cout<<"enter your second binary digit  : ";
    cin>>y;

    int pow_x = 1,ans_x = 0;

    while(x>0)
    {
        int digit = x%10;
        ans_x += digit*pow_x;
        pow_x *= 2;
        x /= 10;
    }
    
    int pow_y = 1,ans_y = 0;

    while(y>0)
    {
        int digit = y%10;
        ans_y += digit*pow_y;
        pow_y *= 2;
        y /= 10;
    }
    
    if(ans_x>ans_y)
    {
        cout<<ans_x<<endl;
    }
    else if(ans_x<ans_y)
    {
        cout<<ans_y<<endl;
    }
    else{
        cout<<"both are equal " <<endl;
        
    }
    return 0;
}