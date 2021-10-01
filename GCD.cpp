#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return GCD(a-b, b);
    return GCD(a, b-a);
}
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b);
    return 0;
}
