// https://www.spoj.com/problems/STPAR/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
   while(cin>>n&&n){
   vector<int> v(n);
   for(int i=0;i<n;++i){
    cin>>v[i];
   }
    stack<int> st;
    int cur =1;
for(int i=0;i<n;++i){
   if(cur  == v[i]){
   ++cur;
    }else{
    st.push(v[i]) 
}
	while(!st.empty() && st.top() == cur){
		++cur;
		st.pop();
	}
}
if(cur==n+1){
cout<<"yes\n";
}else{
  cout<<"no\n";
}
}
   return 0;
}