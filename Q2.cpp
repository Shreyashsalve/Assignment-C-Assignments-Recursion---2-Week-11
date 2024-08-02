#include<iostream>
using namespace std;
void reverseInt(int n, int rev)
{
    if(n==0){
        cout<<rev;
        return;
    }
    rev*=10;
    rev+=n%10;
    n/=10;
    reverseInt(n,rev);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;  
    reverseInt(n,0);
}
