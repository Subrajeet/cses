#include<iostream>
using namespace std;
typedef long long ull;

int main(){

ull n,sum = 0, sum1 = 0;
cin>>n;

ull arr[n];
for(ull i = 0;i<n-1;i++){
  cin>>arr[i];
  sum = sum + arr[i];
}

sum1 = (n*(n+1))/2;
ull missing = sum1 - sum;
cout << missing;

return 0;
}
