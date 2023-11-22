#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     while(t--){
int n;
cin>>n;
  vector<int> v(n);
    for(int i=0;i<n;++i){
	cin>>v[i];
}
   sort(v.begin(),v.end());
bool = true;
   for(int i=0;i<n;i++){
if(v[i+1]-v[i]>1){
     ok = false;}
   if(ok){
cout<<"YES\n";}else{
    cout<<"NO\n";
      }
	return 0;
}