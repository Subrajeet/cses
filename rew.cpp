#include <bits/stdc++.h>
using namespace std;

int main() {

string sc;
cin>>sc;

long long int count = 1, ans = 1;
for(int i = 0;i<=sc.length()-1;i++){
  if(sc[i] == sc[i+1]){
    count++;
  }else{
    count = 1;
  }
  ans = max(ans,count);
}
cout<<ans;
}
