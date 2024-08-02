#include<iostream>
using namespace std;
int sumOfInteger(int i, int sum)
{
    if(i==0) return sum; 
    sumOfInteger(i/10,sum+i%10);


}
int main()
{
    int i=250;  
    cout<<sumOfInteger(i,0);
}