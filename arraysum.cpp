#include <iostream>
using namespace std;

int getsum(int *arr , int n){
int Sum = 0;
for(int i=0;i<n;i++){
         Sum +=arr[i];
}
return Sum;
}

int main(){
int n;
cin>>n;
int *arr=new int[n];
for (int i=0;i<n;i++){

    cin>>arr[i];
}
int ans=getsum(arr,n);
cout<<"answer is:"<<ans<<endl;

return ans;
}
