#include<iostream>
using namespace std;
int print(int n)
{
//base case
if(n==0)
    return 1;

cout<<n<<endl;
print (n-1);
}
int main(){
int n;
cout<<endl;
cin>>n;
print(n);
return 0;}

